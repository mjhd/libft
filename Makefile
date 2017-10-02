NAME = libft.a

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c -I libft.h $(SRC)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY:
	gcc -o output $(SRC) test/testcode.c
	./output
	rm -f output
