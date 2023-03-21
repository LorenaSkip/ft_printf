/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <lnitu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:20:56 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/20 09:15:23 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(char const *str);
int		ft_puutnbr(int n);
int		ft_puutchar(int c);
int		ft_puutstr(char *s);
int		ft_u_puutnbr(unsigned int n);
int		ft_x_puutnbr(char c, unsigned int nb);
int		ft_printf(const char *format, ...);
int		ft_px_puuutnbr(unsigned long long nb);
#endif
