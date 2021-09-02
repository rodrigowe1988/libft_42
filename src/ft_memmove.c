#include "libft.h"
#include <stdio.h>

void  *ft_memmove(void *dest, const void *src, size_t len)
{
  char *tmp;
  
  tmp = (char *)malloc(sizeof(char) * len);
  if (tmp == NULL)
    return (NULL);
  ft_memcpy(tmp, src, len);
  ft_memcpy(dest, tmp, len);
  free(tmp);
  return (dest);
}

int main(void)
{
  printf("Test de ft_memmove: \n");
  char s1[] = "string test";
  char s2[] = "string test";
  
  if (!strcmp(ft_memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5)) && !strcmp(memmove(s1, s1 + 3, 5), memmove(s2, s2 + 3, 5)))
    return (0)
}