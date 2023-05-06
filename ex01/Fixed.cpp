/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:02 by jgo               #+#    #+#             */
/*   Updated: 2023/05/06 16:30:36 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Fixed& inst) {
	return (os << inst.toFloat());
}

const int Fixed::kFractionalBits = 8;

Fixed::Fixed() : fixed_point_(0) {
	std::cout << DFLT_CTOR << std::endl;
}

Fixed::Fixed(const Fixed& inst) {
	std::cout << CPY_CTOR << std::endl;
	*this = inst;
}

Fixed::Fixed(const int raw) : fixed_point_(raw << Fixed::kFractionalBits) {
	std::cout << INT_CTOR << std::endl;
}

Fixed::Fixed(const float raw)
	: fixed_point_(
		  static_cast<int>(roundf(raw * (1 << Fixed::kFractionalBits)))) {
	std::cout << FLOAT_CTOR << std::endl;
}

Fixed::~Fixed() {
	std::cout << DTOR << std::endl;
}

Fixed& Fixed::operator=(const Fixed& inst) {
	std::cout << CPY_ASGMT_OP_CALL << std::endl;
	if (this != &inst)
		this->fixed_point_ = inst.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->fixed_point_);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point_ = raw;
}

float Fixed::toFloat(void) const {
	return ((static_cast<float>(this->fixed_point_) /
			 (1 << Fixed::kFractionalBits)));
}

int Fixed::toInt(void) const {
	return (this->fixed_point_ >> Fixed::kFractionalBits);
}