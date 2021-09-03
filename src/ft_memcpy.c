//#include "libft.h"
#include <stdio.h>

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

void ft_print(int *v, int n);

int main(void)
{
	int x[5] = {-1,-1,-1,-1,-1};
	int v[8] = {1,2,3,4,5,6,7,8};
	ft_print(x, 5);
	ft_memcpy(x, v, 3);
	ft_print(x, 5);
}

void ft_print(int *v, int n)
{
	int i;

	printf("{");
	i = 0;
	while (i < n)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("}\n");
}
