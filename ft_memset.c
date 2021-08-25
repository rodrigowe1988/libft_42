#include "stdio.h"

/*primeiro parametro recebe a variável que será modificado
* segundo, recebe o que será modificado
* terceiro, passa a quantidade de bytes que serão modificados.
* CUIDADO! Passamos a quantidade de bytes a serem modificados, sendo assim um char equivale a 1 byte, um int 4 bytes.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	count;

	str = (char *)b;
	count = 0;
	while (count < len)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
