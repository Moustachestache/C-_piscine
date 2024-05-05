# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjochum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 08:10:39 by mjochum           #+#    #+#              #
#    Updated: 2024/03/19 14:33:15 by mjochum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		The_Animal_Kingdom_Is_Wide_And_Beautiful

SRCS =		main.cpp Animal.cpp Dog.cpp Cat.cpp

CPPFLAGS =		-Wall -Werror -Wextra -std=c++98

OBJS =		$(SRCS:.cpp=.o)

CXX =		c++

$(NAME) :	$(OBJS)
			$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all :		$(NAME)

clean :		
			rm -rf $(OBJS)

fclean :	clean
			rm -rf $(NAME)

re :		fclean $(NAME)
