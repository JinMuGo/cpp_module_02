/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:40:40 by jgo               #+#    #+#             */
/*   Updated: 2023/05/10 16:22:18 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0) {}

Point::Point(const float x, const float y) : x_(x), y_(y) {}

Point::Point(const Point& inst) {
	*this = inst;
}

Point::~Point() {}

Point& Point::operator=(const Point& inst) {
	if (this != &inst) {
		const_cast<Fixed&>(this->x_) = inst.getX();
		const_cast<Fixed&>(this->y_) = inst.getY();
	}
	return (*this);
}

const Fixed& Point::getX(void) const {
	return (this->x_);
};

const Fixed& Point::getY(void) const {
	return (this->y_);
};