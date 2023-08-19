/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:24:03 by jgo               #+#    #+#             */
/*   Updated: 2023/07/22 11:23:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <iostream>
#include "color.h"

#define FIX_DFLT_CTOR GREEN "- Fixed: Default constructor called" RESET
#define FIX_CTOR DARK_GREEN "- Fixed: constructor called" RESET
#define FIX_CTR LIGHT_CYAN "- Fixed: constructor called" RESET
#define FIX_CPY_CTOR CYAN "- Fixed: Copy constructor called" RESET
#define FIX_CPY_ASGMT_OP_CALL DARK_CYAN "- Fixed: Copy assignment operator called" RESET
#define FIX_DTOR ORANGE "- Fixed: Destructor called" RESET
#define FIX_INT_CTOR DARK_BLUE "Int constructor called" RESET
#define FIX_FLOAT_CTOR DARK_CYAN "Float constructor called" RESET
#define FIX_MEMBER_FUNC_CALL "- Fixed member function called"

#endif