/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:02 by jgo               #+#    #+#             */
/*   Updated: 2023/05/05 14:20:02 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::kFractionalBits = 8;

Fixed::Fixed() : fixed_point_(0) {
	std::cout << DFLT_CTOR << std::endl;
}

Fixed::Fixed(const Fixed& inst) {
	std::cout << CPY_CTOR << std::endl;
	*this = inst;
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
	std::cout << "getRawBits " << MEMBER_FUNC_CALL << std::endl;
	return (this->fixed_point_);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits" << MEMBER_FUNC_CALL << std::endl;
	this->fixed_point_ = raw;
}
