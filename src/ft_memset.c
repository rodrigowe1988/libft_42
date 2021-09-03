#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;		
	size_t	count;
	str = (char *)b;
	count = 0;
	while (count < len)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
