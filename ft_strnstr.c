//#include "libft.h"
#include <stddef.h>
#include <string.h>

int	ft_strnstr(const char *big, const char *small, size_t n);
int	ft_strlen(char c[]);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	printf("ft_strnstr(\"teste\", \"es\", 6) : es -> %s\n:", ft_strnstr("teste", "es", 7));
	printf("ft_strnstr(\"teste\", \"st\", 4) : st -> %s\n:", ft_strnstr("teste", "es", 4));
	printf("ft_strnstr(\"teste\", \"es\", 2) : es -> %s\n:", ft_strnstr("teste", "es", 2));

	return (0);
}

int	ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	b_size;
	size_t	s_size;
	size_t	n_size;

	b_size = ft_strlen(big);
	s_size = ft_strlen(small);
	if (s_size == 0)
		return ((char *)big);
	else if (s_size > b_size)
		return (NULL);
	if (b_size > n)
		n_size = n;
	else
		n_size = b_size;
	while (s_size <= n_size)
	{
		if (!ft_strncmp(big, small, s_size))
			return ((char *)big);
		big++;
		n_size--;
	}
	return (NULL);
}

int	ft_strlen(char c[])
{
	int	count;

	count = 0;
	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
