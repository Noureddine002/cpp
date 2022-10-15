NAME = span
CFLAGS = -Wall -Wextra -Werror
CC = c++

SRCS = main.cpp Span.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

%.o:%.cpp Span.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all