#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int main(void)
{
	char	c;
	c = 'b';
	printf("%d", ft_isdigit(c));
}
