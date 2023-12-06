SRCS	=	Sorcerer.cpp Victim.cpp Peon.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra

CC	=	clang++

NAME	=	polymorph

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
