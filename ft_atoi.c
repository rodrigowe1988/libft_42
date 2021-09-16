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

static int	ft_isnotdigit(int c)
{
	if ((c == ' ' || c == '\n' || c == '\t' || c == '\r' \
	|| c == '\f' || c == '\v'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	while ((ft_isnotdigit(*str)))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while ((ft_isdigit(*str)))
	{
		num *= 10;
		num += sign * (*str - '0');
		str++;
	}
	return (num);
}
