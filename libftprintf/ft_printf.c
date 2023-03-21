/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <lnitu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:16:36 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/20 14:10:06 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_flag_print(va_list *lst, char c)
{
	int	counter;

	counter = 0;
	if (c == '%')
	{
		write (1, "%", 1);
		counter++;
	}
	else if (c == 'c')
		counter += ft_puutchar(va_arg(*lst, int));
	else if (c == 's')
		counter += ft_puutstr(va_arg(*lst, char *));
	else if (c == 'd' || c == 'i')
		counter += ft_puutnbr(va_arg(*lst, int));
	else if (c == 'u')
		counter += ft_u_puutnbr(va_arg(*lst, unsigned int));
	else if (c == 'x' || c == 'X')
		counter += ft_x_puutnbr(c, va_arg(*lst, unsigned int));
	else if (c == 'p')
	{
		counter += 2;
		write(1, "0x", 2);
		counter += ft_px_puuutnbr(va_arg(*lst, unsigned long long));
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		counter;
	va_list	lst;

	va_start(lst, format);
	i = 0;
	counter = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			counter += write(1, &format[i], 1);
			i++;
		}
		else
		{
			i++;
			counter += ft_flag_print(&lst, format[i]);
			i++;
		}
	}
	va_end(lst);
	return (counter);
}
