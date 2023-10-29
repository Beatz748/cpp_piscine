SRCS	=	Zombie.cpp ZombieHorde.cpp main.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

CC	=	clang++

FLAGS	=	-Wall -Werror -Wextra

NAME	=	Zombie2

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
