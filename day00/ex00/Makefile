SRCS	=	megaphone.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

CC	=	clang++

NAME	=	megaphone

all:	$(OBJS) $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re:	fclean all
