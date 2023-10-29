SRCS	=	ex04.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

CC	=	clang++

FLAGS	=	-Wall -Werror -Wextra

NAME	=	string

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
