/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:42:57 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 13:42:57 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	count;

	if (!s || !f)
		return (NULL);
	count = 0;
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	while (res[count] != 0)
	{
		res[count] = f(count, res[count]);
		count++;
	}
	return (res);
}
