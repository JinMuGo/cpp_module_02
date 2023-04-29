/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:02 by jgo               #+#    #+#             */
/*   Updated: 2023/04/29 18:35:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : val(0) {
	std::cout << DFLT_CTOR << std::endl;
}

Fixed::Fixed(const Fixed& inst) {
	std::cout << CPY_CTOR << std::endl;
	*this = inst;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& inst) {
	std::cout << CPY_ASGMT_OP_CALL << std::endl;
	if (this != &inst)
		this->val = inst.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits" << MEMBER_FUNC_CALL << std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits" << MEMBER_FUNC_CALL << std::endl;
	this->val = raw;
}
