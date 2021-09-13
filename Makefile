# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 11:42:55 by roweber           #+#    #+#              #
#    Updated: 2021/09/10 11:42:55 by roweber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_isprint.c \
		src/ft_itoa.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memset.c \
		src/ft_split.c \
		src/ft_strchr.c \
		src/ft_strdup.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strmapi.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strtrim.c \
		src/ft_substr.c \
		src/ft_tolower.c \
		src/ft_toupper.c \

OBJS = ${SRCS:.c=.o}
GCC_F = -Wall -Wextra -Werror -I. -c
INCLUDES = libft.h

all: $(NAME)

$(NAME): $(INCLUDES)
	gcc -I ${GCC_F} -c ${SRCS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re: fclean all

run: fclean all
	gcc ${GCC_F} main.c -L . -lft

delete:
	rm -f *.o *.out *.exe

.PHONY:	all clean fclean re
