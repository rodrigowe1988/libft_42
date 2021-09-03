#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;
	size_t	count;
	str = (char *)ptr;
	count = 0;
	while (count < n)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (ptr);
}
