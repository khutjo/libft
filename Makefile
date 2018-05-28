all:
	gcc -c -Wall -Werror -Wextra *.c
	ar -rc libft.a *.o
	ranlib libft.a

so:
	gcc -Wall -Wextra -Werror -fPIC -c *.c
	ld -G *.o -o libft.so
