//#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	char s1[] = "42spcadete";
	char s2[] = "42spcadete42";

	printf("Teste de ft_memcmp: %d\n", ft_memcmp(s1, s2, 3));
	printf("Teste de ft_memcmp: %d\n", memcmp(s1, s2, 3));
	printf("Teste de ft_memcmp: %d\n", ft_memcmp(s1, s2, 9));
	printf("Teste de ft_memcmp: %d\n", memcmp(s1, s2, 9));
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
