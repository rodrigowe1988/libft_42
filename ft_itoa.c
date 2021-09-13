//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char			*ft_itoa(int n);
static void		get_nbr_str(char *str, int n, size_t size);

int main(void)
{
	printf("0: %s\n", ft_itoa(0));
	printf("1: %s\n", ft_itoa(1));
	printf("-1: %s\n", ft_itoa(-1));
	printf("-543: %s\n", ft_itoa(-543));
	printf("573: %s\n", ft_itoa(573));
}

char	*ft_itoa(int n)
{
	int		temp;
	char	*num;
	size_t	size;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	temp = n / 10;
	while (temp)
	{
		size++;
		temp /= 10;
	}
	num = malloc(size + 1);
	if (num == NULL)
		return (NULL);
	get_nbr_str(num, n, size);
	return (num);
}

static void		get_nbr_str(char *str, int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
	{
		while (size--)
		{
			str[size] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (--size)
		{
			str[size] = (n % 10) * -1 + '0';
			n /= 10;
		}
		str[size] = '-';
	}
}
