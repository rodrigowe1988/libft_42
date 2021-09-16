/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:15:22 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 12:15:22 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	ft_strnlen(const char *s, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strnlen(dest, size);
	if (destlen == size)
		return (destlen + srclen);
	ft_strlcpy(&dest[destlen], src, size - destlen);
	return (destlen + srclen);
}

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
		i++;
	return (i);
}
