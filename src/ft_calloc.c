#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;

	if (!(c = malloc(size * count)))
		return (NULL);
	ft_memset(c, 0, count * size);
	return (c);
}
