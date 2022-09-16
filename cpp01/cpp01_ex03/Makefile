NAME =  Unnecessary_violence
CFLAGS = -Wall -Wextra -Werror
CC = c++

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

%.o:%.cpp Zombie.hpp HumanA.hpp HumanB.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all