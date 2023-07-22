/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:40:25 by jgo               #+#    #+#             */
/*   Updated: 2023/07/22 12:02:43 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
   private:
	const Fixed x_;
	const Fixed y_;

   public:
	Point();
	Point(const float x, const float y);
	Point(const Point& inst);
	~Point();
	Point& operator=(const Point& inst);
	const Fixed& getX(void) const;
	const Fixed& getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
