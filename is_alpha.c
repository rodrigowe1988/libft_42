#include <unistd.h>
#include <stdio.h>

int	ft_isaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;
	char	qualquer[9] = "Rod3rigo";
	char	*letra;
	letra = qualquer;
	c = 'Q';
	printf("%d\n", ft_isaplha(c));
	while (*letra != '\0')
	{
		printf("%d", ft_isaplha(*letra));
		letra++;
	}
}
