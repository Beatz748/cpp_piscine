SRCS	=	Pony.cpp main.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

NAME	=	Pony

CC	=	clang++

FLAGS	=	-Wall -Werror -Wextra

all:		$(OBJS) $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all
