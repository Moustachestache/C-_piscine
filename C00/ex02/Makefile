# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjochum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 08:10:39 by mjochum           #+#    #+#              #
#    Updated: 2024/03/25 12:34:39 by mjochum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Phonebook

SRCS =		tests.cpp Account.cpp

OBJS =		$(SRCS:.cpp=.o)

CFLAGS =	-Wall -Werror -Wextra -std=c++98

CC =		c++

$(NAME) :	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all :		$(NAME)

clean :
			rm -rf $(OBJS)

fclean :	clean
			rm -rf $(NAME)

re :		fclean $(NAME)
