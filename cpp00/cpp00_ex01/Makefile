NAME = phonebook
FLAGS = -Wall -Werror -Wextra
CC = c++

SRCS = contact.class.cpp main.cpp phonebook.class.cpp 
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp contact.class.hpp phonebook.class.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
