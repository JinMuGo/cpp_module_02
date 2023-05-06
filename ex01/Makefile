# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 19:34:14 by jgo               #+#    #+#              #
#    Updated: 2023/05/05 16:19:08 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../makeConfig/Rules.mk
include ../makeConfig/Color_rules.mk

SRCS :=	main.cpp \
		Fixed.cpp

NAME := Towards_a_MoreUsefulFixed-pointNumberClass

OBJS := $(SRCS:.cpp=.o)
DEPS := $(SRCS:.cpp=.d)
-include $(DEPS)

include ../makeConfig/Recipes.mk