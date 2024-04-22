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

NAME =		canonical_evangelisation

SRCS =		Fixed.cpp main.cpp

FLAGS =		-Wall -Werror -Wextra -std=c++98

OBJS =		$(SRCS:.cpp=.o)

CXX =		c++

$(NAME) :	$(OBJS)
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

all :		$(NAME)

clean :		
			rm -rf $(OBJS)

fclean :	clean
			rm -rf $(NAME)

re :		fclean $(NAME)
