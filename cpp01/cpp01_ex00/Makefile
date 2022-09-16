NAME = zombie
CFLAGS = -Wall -Wextra -Werror
CC = c++

SRCS = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

%.o:%.cpp Zombie.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
	