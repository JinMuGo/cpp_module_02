/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:04 by jgo               #+#    #+#             */
/*   Updated: 2023/05/07 12:59:24 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "Fixed.h"

class Fixed {
   private:
	const static int kFractionalBits;  // const static vs static const
	int fixed_point_;

   public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& inst);
	explicit Fixed(const int raw);
	explicit Fixed(const float raw);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed& operator=(const Fixed& inst);
	bool operator>(const Fixed& inst) const;
	bool operator<(const Fixed& inst) const;
	bool operator>=(const Fixed& inst) const;
	bool operator<=(const Fixed& inst) const;
	bool operator==(const Fixed& inst) const;
	bool operator!=(const Fixed& inst) const;
	Fixed operator+(const Fixed& inst) const;
	Fixed operator-(const Fixed& inst) const;
	Fixed operator*(const Fixed& inst) const;
	Fixed operator/(const Fixed& inst) const;
	Fixed operator++(int);
	Fixed& operator++(void);
	Fixed operator--(int);
	Fixed& operator--(void);

	static Fixed& min(Fixed& lhs, Fixed& rhs);
	static Fixed& min(const Fixed& lhs, const Fixed& rhs);
	static Fixed& max(Fixed& lhs, Fixed& rhs);
	static Fixed& max(const Fixed& lhs, const Fixed& rhs);
};

std::ostream& operator<<(std::ostream& os, const Fixed& inst);

#endif