NAME =		Bureaucrat
SRCS =		main.cpp Bureaucrat.cpp

CPPFLAGS =	-Wall -Werror -Wextra -std=c++98

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