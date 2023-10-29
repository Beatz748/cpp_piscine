SRCS	=	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

CC	=	clang++

FLAGS	=	-Wall -Werror -Wextra

NAME	=	attackers

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
