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

static size_t	get_wordlen(const char *s, char c)
{
	size_t	offset;

	offset = 0;
	while (s[offset] && s[offset] != c)
		offset++;
	return (offset++);
}

static char		*worddup(const char *s, size_t len)
{
	char	*str;
	size_t	offset;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	offset = 0;
	while (offset < len)
	{
		str[offset] = s[offset];
		offset++;
	}
	str[offset] = '\0';
	return (str);
}

static void 	*freesplit(char	**tab, size_t stop)
{
	size_t	counter;

	counter = 0;
	while (counter < stop)
		free(tab[counter]);
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	len;
	size_t	words;
	size_t	counter;

	if (s == NULL)
		return (NULL);
	words = ft_countdown(s, c);
	tab = malloc((words + 1) * sizeof(char*));
	if (tab ==  NULL)
		return (NULL);
	counter = 0;
	while (counter < words)
	{
		len = get_wordlen(s, c);
		if (len)
		{
			tab[counter] =  worddup(s, len);
			if (tab[counter++] == NULL)
		}
	}
}
