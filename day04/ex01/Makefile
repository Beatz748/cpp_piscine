SRCS	=	AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp \
		Enemy.cpp SuperMutant.cpp RadScorpion.cpp \
		Character.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC	=	clang++

FLAGS	=	-Wall -Werror -Wextra -std=c++14 -g

NAME	=	game

all:	$(NAME)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(NAME):	$(OBJS)

%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
