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

GCC_F = -Wall -Wextra -Werror -I. -c

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

OBJS = ${SRCS:.c=.o}

all:
	gcc -I ${GCC_F} -c ${SRCS}
	mv ${OBJS} ${F}/
	ar rcs ${NAME} ${F}/${OBJS}
	rm -f ${F}/${OBJS}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME}

re:		fclean all

run: 	fclean all
	gcc ${GCC_F} main.c -L . -lft

delete:
	rm -f *.o

.PHONY:	all clean fclean re
