
#include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t n);

int		main(void)
{
	char	str[30];

	strcpy(str, "This is string.h function");
	puts(str);

	ft_memset(str, '0', 7);
	puts(str);

	return (0);
}

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*str;

	str = (char *)ptr;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (ptr);
}
