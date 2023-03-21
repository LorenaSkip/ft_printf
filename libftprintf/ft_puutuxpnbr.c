/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puutuxpnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <lnitu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:02:15 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/20 09:15:36 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_u_puutnbr(unsigned int n)
{
	unsigned int	a;
	static int		written;

	written = 0;
	a = n % 10;
	n = n / 10;
	if (n > 0)
		ft_u_puutnbr(n);
	a += 48;
	written += write(1, &a, 1);
	return (written);
}

int	ft_x_puutnbr(char c, unsigned int nb)
{
	int			a;
	char		*base;
	static int	counter;

	counter = 0;
	a = nb % 16;
	nb = nb / 16;
	if (nb > 0)
		ft_x_puutnbr(c, nb);
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	counter += write(1, &base[a], 1);
	return (counter);
}

int	ft_px_puuutnbr(unsigned long long nb)
{
	int			a;
	char		*base;
	static int	counter;

	counter = 0;
	a = nb % 16;
	nb = nb / 16;
	if (nb > 0)
		ft_px_puuutnbr(nb);
	base = "0123456789abcdef";
	counter += write(1, &base[a], 1);
	return (counter);
}
