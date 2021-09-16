/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:34:33 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 12:34:33 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int		len;
	char	ch;

	ch = (unsigned char)n;
	len = ft_strlen(str);
	if (ch == 0)
		return ((char *)(str + len));
	while (--len >= 0)
	{
		if (*(str + len) == ch)
		{
			return ((char *)(str + len));
		}
	}
	return (NULL);
}
