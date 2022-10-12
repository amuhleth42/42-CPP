# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 17:26:25 by amuhleth          #+#    #+#              #
#    Updated: 2022/10/12 13:28:23 by amuhleth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS		= main.cpp			\
			  Zombie.cpp		\
			  newZombie.cpp		\
			  randomChump.cpp	\

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
