/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:39:48 by jgo               #+#    #+#             */
/*   Updated: 2023/07/22 12:08:29 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	https://wogud6792.tistory.com/12
	x1y2 + x2y3 + x3y1 - (x2y1 + x3y2 + x1y3)
	외적을 이용한
	CCW 알고리즘은 시계반대방향일 때 양수, 시계방향일 때 음수,
	평행일 때 0을 반환한다
	positive = true;
	negatibe and edge = false;
*/
static inline double ccw(Point const a, Point const b, Point const c) {
	const float tmp = (a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY()).toFloat();

	return (tmp - (b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY()).toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	const bool abp = ccw(a, b, point) > 0;
	const bool bcp = ccw(b, c, point) > 0;
	const bool cap = ccw(c, a, point) > 0;

	return ((abp && bcp && cap) || (!abp && !bcp && !cap));
}