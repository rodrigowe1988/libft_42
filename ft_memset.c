/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:51:34 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 11:51:35 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;
	size_t	count;

	str = (char *)ptr;
	count = 0;
	while (count < n)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (ptr);
}
