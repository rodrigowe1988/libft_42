/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:21:06 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 13:21:06 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//asfdsafdsaf
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len > start)
	{
		i = 0;
		while (s[i + start] && i < len)
			i ++;
		len = i;
	}
	else
		return (ft_strdup(""));
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
