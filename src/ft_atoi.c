//#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c);
static int	ft_isnotdigit(int c);
int	ft_atoi(const char *str);

int	main(void)
{
	printf("%d", ft_atoi("65\n"));
	printf("\n");
	printf("%d", ft_atoi("333\n"));
	printf("\n");
	printf("%d", ft_atoi("\n\t42"));
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static int	ft_isnotdigit(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' \
	|| c == '\f' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	while ((ft_isnotdigit(*str)))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while ((ft_isdigit(*str)))
	{
		num *= 10;
		num += sign * (*str - '0');
		str++;
	}
	return (num);
}
