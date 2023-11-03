SRCS	=	main.cpp Fixed.class.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC	=	clang++

FLAGS	=	-Wall -Werror -Wextra

NAME	=	eval_expr

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
