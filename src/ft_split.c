#include "libft.h"

static size_t	ft_countdown(const char *s, char c)
{
	int 	is_word;
	size_t	words;

	words = 0;
	is_word = 0;
	while (*s)
	{
		if (!is_word && *s != c)
		{
			is_word = 1;
			words++;
		}
		else if (is_word && *s == c)
			is_word = 0;
		s++;
	}
	return (words);
}
