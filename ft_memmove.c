#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	printf("Teste de ft_memmove(): \n");
	char	s1[] = "String Test";
	char	s2[] = "String Test";
	if (!strcmp(memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5)) && !strcmp(memmove(s1 + 3, s1, 5), ft_memmove(s2 + 3, s2, 5)))
		printf("OK\n");
	else
		printf("Failed (tests : ft_memmove(s, s + 3, 5) and ft_memmove(s+3, s, 5)).\n");
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
