/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:22:59 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 11:22:59 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *dest)
{
	int	sign;
	int	num;
	int	a;

	a = 0;
	if (*dest == 0)
		return (0);
	while (dest[a] == ' ' || (dest[a] >= 9 && dest[a] <= 13))
		a++;
	sign = 1;
	if (dest[a] == '+' || dest[a] == '-')
	{
		if (dest[a] == '-')
			sign = -sign;
		a++;
	}
	num = 0;
	while (dest[a] <= '9' && dest[a] >= '0')
	{
		num *= 10;
		num = num + dest[a] - 48;
		a++;
	}
	return (num * sign);
}
