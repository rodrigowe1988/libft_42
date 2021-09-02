.PHONY: all clean fclean re

NAME = libft.a

GCC_F = -Wall -Wextra -Werror

SRCS = ../src/*.c

F = src

OBJS = ${SRCS:.C=.O}

all:
	gcc -I ${GCC_F} -c ${F}/${SRCS}
	mv ${OBJS} ${F}/
	ar rcs ${NAME} ${F}/${OBJS}
	rm -f ${F}/${OBJS}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME}

re: fclean all

run: fclean allz
	gcc ${GCC_F} main.c -L . -lft