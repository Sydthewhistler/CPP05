FILE = AForm.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
NAME=Bureaucrat
CC=c++ -std=c++98
CFLAGS=-Wall -Wextra -Werror
SRCS = $(FILE)
OBJS = ${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all : $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)\

re : fclean all