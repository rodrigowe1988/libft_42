//#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c);

int main(void)
{
	printf("%d\n", ft_isalnum('R'));
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum('.'));
}

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || \
	(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
