/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:49:44 by jgo               #+#    #+#             */
/*   Updated: 2023/07/22 11:50:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static inline void print(const bool judge) {
	std::cout << "the \"Point\" is " << (judge ? "\e[92m **in**" : "\e[91m **out**") << RESET " of triangle"
			  << std::endl;
}

int main(void) {
	Point a;
	Point b(42.42, 24.24);
	Point c(24.24, 42.42);
	Point point(42.24, 24.24);
	bool judge = bsp(a, b, c, point);

	print(judge);
	point = Point(42.42, 24.24);

	judge = bsp(a, b, c, point);
	print(judge);

	return (0);
}