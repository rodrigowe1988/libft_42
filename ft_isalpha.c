//#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c);

int main(void)
{
	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha('3'));
	printf("%d\n", ft_isalpha('%'));
}

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
