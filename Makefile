NAME = libft.a

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -o output include/$(SRC) main.c
	gcc -Wall -Werror -Wextra -c include/libft.h include/$(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	clean
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
