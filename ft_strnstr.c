/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:44:58 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 12:44:58 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	size_t	ptrlen;

	ptrlen = ft_strlen(ptr);
	if (!ptrlen)
		return ((char *)str);
	while (*str && ptrlen <= n--)
	{
		if (ft_strncmp(str, ptr, ptrlen) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
