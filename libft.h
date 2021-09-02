#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *str, size_t n);
int	    ft_isalnum(int c);
int	    ft_isalpha(int c);
int	    ft_isascii(int c);
int	    ft_isdigit(int c);
int	    ft_isprint(int c);
int     ft_strlen(char c[]);
//size_t  ft_strlcat();
void  *ft_memchr(const void *s, int c, size_t n);
//void  memcmp();
void	  *ft_memcpy(void *dst, const void *src, size_t n);
void    *memmove(void *dest, const void *src, size_t n);
void	  *ft_memset(void *ptr, int c, size_t n);

int     ft_toupper(int c);
int     ft_tolower(int c);






#endif