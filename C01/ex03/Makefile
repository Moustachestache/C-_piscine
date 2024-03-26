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

NAME =		very_necessary_violence

SRCS =		main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CPPFLAGS =	-Wall -Werror -Wextra -std=c++98

OBJS =		$(SRCS:.cpp=.o)

CC =		c++

$(NAME) :	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all :		$(NAME)

clean :		
			rm -rf $(OBJS)

fclean :	clean
			rm -rf $(NAME)

re :		fclean $(NAME)
