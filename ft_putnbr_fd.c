/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:00:54 by roweber           #+#    #+#             */
/*   Updated: 2021/09/15 11:01:13 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	loop(int nb, int fd)
{
	if (nb >= 10)
	{
		loop(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == INT_MIN)
	{
		write(fd, "-", 1);
		loop(nb / -10, fd);
		write(fd, "8", 1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb >= 0)
		loop(nb, fd);
}
