/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:02 by jgo               #+#    #+#             */
/*   Updated: 2023/07/22 11:22:32 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::kFractionalBits = 8;

std::ostream& operator<<(std::ostream& os, const Fixed& inst) {
	return (os << inst.toFloat());
}

Fixed& Fixed::operator=(const Fixed& inst) {
	std::cout << FIX_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &inst)
		this->fixed_point_ = inst.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed& inst) const {
	return (getRawBits() > inst.getRawBits());
};
bool Fixed::operator<(const Fixed& inst) const {
	return (getRawBits() < inst.getRawBits());
};
bool Fixed::operator>=(const Fixed& inst) const {
	return (getRawBits() >= inst.getRawBits());
};
bool Fixed::operator<=(const Fixed& inst) const {
	return (getRawBits() <= inst.getRawBits());
};
bool Fixed::operator==(const Fixed& inst) const {
	return (getRawBits() == inst.getRawBits());
};
bool Fixed::operator!=(const Fixed& inst) const {
	return (getRawBits() != inst.getRawBits());
};

Fixed Fixed::operator+(const Fixed& inst) const {
	return (Fixed(toFloat() + inst.toFloat()));
}
Fixed Fixed::operator-(const Fixed& inst) const {
	return (Fixed(toFloat() - inst.toFloat()));
}
Fixed Fixed::operator*(const Fixed& inst) const {
	return (Fixed(toFloat() * inst.toFloat()));
}
Fixed Fixed::operator/(const Fixed& inst) const {
	return (Fixed(toFloat() / inst.toFloat()));
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->fixed_point_++;
	return (tmp);
};
Fixed& Fixed::operator++(void) {
	++this->fixed_point_;
	return (*this);
};
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->fixed_point_--;
	return (tmp);
};
Fixed& Fixed::operator--(void) {
	--this->fixed_point_;
	return (*this);
};

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	return (lhs > rhs ? rhs : lhs);
};
Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	return (lhs > rhs ? const_cast<Fixed&>(rhs) : const_cast<Fixed&>(lhs));
};
Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	return (lhs > rhs ? lhs : rhs);
};
Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	return (lhs > rhs ? const_cast<Fixed&>(lhs) : const_cast<Fixed&>(rhs));
};

Fixed::Fixed() : fixed_point_(0) {
	std::cout << FIX_DFLT_CTOR << std::endl;
}

Fixed::Fixed(const Fixed& inst) {
	std::cout << FIX_CPY_CTOR << std::endl;
	*this = inst;
}

Fixed::Fixed(const int raw) : fixed_point_(raw << Fixed::kFractionalBits) {
	std::cout << FIX_INT_CTOR << std::endl;
}

Fixed::Fixed(const float raw) : fixed_point_(static_cast<int>(roundf(raw * (1 << Fixed::kFractionalBits)))) {
	std::cout << FIX_FLOAT_CTOR << std::endl;
}

Fixed::~Fixed() {
	std::cout << FIX_DTOR << std::endl;
}

int Fixed::getRawBits(void) const {
	return (this->fixed_point_);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point_ = raw;
}

float Fixed::toFloat(void) const {
	return ((static_cast<float>(this->fixed_point_) / (1 << Fixed::kFractionalBits)));
}

int Fixed::toInt(void) const {
	return (this->fixed_point_ >> Fixed::kFractionalBits);
}