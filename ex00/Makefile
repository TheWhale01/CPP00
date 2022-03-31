CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES=megaphone.cpp
OBJS=${CFILES:.c=.o}
NAME=megaphone

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re