SRCS	=	Contact.cpp main.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

CC	=	clang++ -g -Wall -Werror -Wextra

NAME	=	phonebook

all:	$(OBJS) $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	./$(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
