//#include "libft.h"
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('3'));
	printf("%d\n", ft_isascii('%'));
	printf("%d\n", ft_isascii('.'));
	printf("%d\n", '.');
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
