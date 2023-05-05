/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:04 by jgo               #+#    #+#             */
/*   Updated: 2023/05/05 14:25:10 by jgo              ###   ########.fr       */
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
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed& inst);
};

#endif