#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	if (n != 0)
		ft_memset(str, '\0', n);
}
