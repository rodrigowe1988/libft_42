//#include "libft.h"
#include<stdio.h>
#include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t n);
void	ft_bzero(void *str, size_t n);

int	main(void)
{
	char any[8] = "Rodrigo";
	int x;

	x = 333333;
	printf("Char var: %s", any);
	printf("\nInt var: %d", x);
	ft_bzero(&x, 1);
	ft_bzero(any, 1);
	printf("\n");
	printf("%s", any);
	printf("%d", x);
}

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;

	str = (char *)ptr;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (ptr);
}

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
