# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 23:07:44 by amuhleth          #+#    #+#              #
#    Updated: 2022/10/05 17:01:05 by amuhleth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS		= megaphone.cpp
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
