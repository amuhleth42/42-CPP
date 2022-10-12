# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 17:26:25 by amuhleth          #+#    #+#              #
#    Updated: 2022/10/12 14:07:27 by amuhleth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= violence
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS		= main.cpp			\
			  Weapon.cpp		\
			  HumanA.cpp		\
			  HumanB.cpp		\

OBJS		= $(SRCS:.cpp=.o)


$(NAME)	: $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

all : $(NAME)


clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re :	fclean all

.PHONY : all clean fclean re
