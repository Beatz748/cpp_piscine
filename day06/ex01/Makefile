SRCS	=	main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC	=	clang++

FLAGS	=#	-Wall -Werror -Wextra

NAME	=	serialize

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJS)

fclean:	clean
	rm $(NAME)

re:	fclean all
