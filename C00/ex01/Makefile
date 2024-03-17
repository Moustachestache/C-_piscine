# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjochum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 08:10:39 by mjochum           #+#    #+#              #
#    Updated: 2024/03/17 13:28:25 by mjochum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Phonebook

SRCS =		main.cpp

OBJS =		$(SRCS:.c=.o)

CFLAGS =	-Wall -Werror -Wextra -std=c++98

CC =		clang++


$(NAME) :	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all :		$(NAME)

clean :		rm -rf $(OBJS)

fclean :	clean
			rm -rf $(NAME)

re :		fclean $(NAME)
