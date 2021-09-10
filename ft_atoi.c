#include "libft.h"
#include <stdio.h>

static int	ft_isnotdigit(int c)
{
	if ((c == ' ' || c == '\n' || c == '\t' || c == '\r' \
	|| c == '\f' || c == '\v'))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
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

int	main(void)
{
	printf("%d", ft_atoi("65"));
}
