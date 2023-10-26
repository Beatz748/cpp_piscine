SRCS	=	megaphone.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

CC	=	clang++ -Wall -Werror -Wextra

NAME	=	megaphone

all:	$(OBJS) $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
