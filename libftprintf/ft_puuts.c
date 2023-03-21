/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puuts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <lnitu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:39:18 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/20 09:16:43 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_puutnbr(int n)
{
	int	a;
	int	counter;

	counter = 0;
	if (n == -2147483648)
		counter += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			counter += write(1, "-", 1);
		}
		a = n % 10;
		n = n / 10;
		if (n > 0)
			counter += ft_puutnbr(n);
		a += 48;
		counter += write(1, &a, 1);
	}
	return (counter);
}

int	ft_puutchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_puutstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
