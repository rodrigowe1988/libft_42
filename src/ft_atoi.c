//#include "libft.h"
#include <stdio.h>

int ft_atoi(char *str)
{
  int i;
  int res; 
  
  i = 0;
  res = 0;
  while (str[i] != '\0')
  {
    res = res * 10 + str[i] - 48;
    i++;
  }
  return (res);
}

int main(void)
{
  printf("%d", ft_atoi("65"));

}