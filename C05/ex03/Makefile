NAME =		InternallyIAmDying
SRCS =		main.cpp Bureaucrat.cpp AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp

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