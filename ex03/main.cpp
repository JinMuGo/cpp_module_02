/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:49:44 by jgo               #+#    #+#             */
/*   Updated: 2023/05/10 16:15:25 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	Point a;
	Point b(42.42, 24.24);
	Point c(24.24, 42.42);
	Point point(42.24, 24.24);

	bool judge = bsp(a, b, c, point);

	std::cout << "the \"Point\" is " << (judge ? "**in**" : "**out**") << " of triangle"
			  << std::endl;

	point = Point(42.42, 24.24);

	judge = bsp(a, b, c, point);
	std::cout << "the \"Point\" is " << (judge ? "**in**" : "**out**") << " of triangle"
			  << std::endl;

	return (0);
}