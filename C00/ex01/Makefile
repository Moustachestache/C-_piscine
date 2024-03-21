# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjochum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 08:10:39 by mjochum           #+#    #+#              #
#    Updated: 2024/03/20 21:49:40 by mjochum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Phonebook

SRCS =		main.cpp Contact.cpp PhoneBook.cpp

OBJS =		$(SRCS:.cpp=.o)

CFLAGS =	-Wall -Werror -Wextra -g -std=c++98

CC =		c++


$(NAME) :	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all :		$(NAME)

clean :
			rm -rf $(OBJS)

fclean :	clean
			rm -rf $(NAME)

re :		fclean $(NAME)
