//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	*ft_memset(void *ptr, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	printf("\nTeste da ft_calloc: \n");
	char	*ptr;
	ptr = ft_calloc(5, sizeof(int));
	free(ptr);
}

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;

	str = (char *)ptr;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (!(new = malloc(size * count)))
		return (NULL);
	ft_memset(new, 0, count * size);
	return (new);
}
