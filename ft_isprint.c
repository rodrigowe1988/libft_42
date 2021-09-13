//#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c);

int		main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('3'));
	printf("%d\n", ft_isprint('%'));
	printf("%d\n", ft_isprint('.'));
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
