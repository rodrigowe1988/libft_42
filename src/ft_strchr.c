#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + 1);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + 1);
	return (NULL);
}
