/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:39:48 by jgo               #+#    #+#             */
/*   Updated: 2023/05/10 16:29:34 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	https://wogud6792.tistory.com/12
	x1y2 + x2y3 + x3y1 - (x2y1 + x3y2 + x1y3)
	CCW 알고리즘은 시계반대방향일 때 양수, 시계방향일 때 음수,
	평행일 때 0을 반환한다
	positive = true;
	negatibe and edge = false;
*/
static inline bool ccw(Point const o, Point const w, Point const t) {
	float tmp = o.getX().toFloat() * w.getY().toFloat() +
				w.getX().toFloat() * t.getY().toFloat() +
				t.getX().toFloat() * o.getY().toFloat();
	tmp = tmp - (w.getX().toFloat() * o.getY().toFloat() +
				 t.getX().toFloat() * w.getY().toFloat() +
				 o.getX().toFloat() * t.getY().toFloat());
	return (tmp > 0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	const bool abp = ccw(a, b, point);
	const bool bcp = ccw(b, c, point);
	const bool cap = ccw(c, a, point);

	return ((abp && bcp && cap) || (!abp && !bcp && !cap));
}