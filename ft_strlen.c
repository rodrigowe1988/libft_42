#include "libft.h"

int	ft_strlen(char c[])
{
	int	count;

	count = 0;
	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
