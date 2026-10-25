NAME = rush-02

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	$(RM) $(OBJ)

src/%.o: src/%.c includes/ft.h
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re
