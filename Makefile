NAME = libft.a

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c -I include/libft.h include/$(SRC)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
test:
	gcc -o output include/$(SRC) testcode.c
	./output
	rm -f output
re: fclean all
