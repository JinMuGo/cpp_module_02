/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:04 by jgo               #+#    #+#             */
/*   Updated: 2023/04/29 18:25:08 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "Fixed.h"

class Fixed {
   private:
	const static int _fractionalBits;
	int val;

   public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& inst);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed& inst);
};

#endif