#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int     ft_atoi(char *str);
void    ft_bzero(void *str, size_t n);
int	    ft_isalnum(int c);
int	    ft_isalpha(int c);
int	    ft_isascii(int c);
int	    ft_isdigit(int c);
int	    ft_isprint(int c);
int     ft_strlen(char c[]);
void  	*ft_memchr(const void *s, int c, size_t n);
int  	memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);
char  	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
int 	ft_strlen(char c[]);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int     ft_toupper(int c);
int     ft_tolower(int c);






#endif
