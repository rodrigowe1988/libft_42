//#include "libft.h"
#include <stdio.h>

int		ft_isdigit(int c);

int		main(void)
{
	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit('%'));
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
