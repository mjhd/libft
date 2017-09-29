libft_functions = include/*.c
libft: main.c libft.h
	gcc -o output $(libft_functions) main.c

