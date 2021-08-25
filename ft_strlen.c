#include <unistd.h>
#include <stdio.h>

int ft_strlen(char c[])
{
	int	count;
	count = 0;
	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}

int main(void)
{
	char	qualquer[8] = "Rodrigo";
	printf("%i", ft_strlen(qualquer));
}
