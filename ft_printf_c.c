/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:28:08 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/28 16:11:36 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(va_list args, t_flags flags)
{
	char	c;
	int		i;

	i = 0;
	c = va_arg(args, int);
	if (flags.minus == 1)
		write (1, &c, 1);
	i += ft_printf_width(&c, args, flags);
	if (flags.minus == 0)
		write (1, &c, 1);
	return (1);
}

int	ft_printf_s(va_list args, t_flags flags)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printf_d(va_list args, t_flags flags)
{
	int	d;
	int	i;

	i = 0;
	d = va_arg(args, int);
	if (d < 0)
	{
		write(1, "-", 1);
		d = -d;
		i++;
	}
	i += ft_putnbr(d);
	return (i);
}

int	ft_printf_u(va_list args, t_flags flags)
{
	unsigned int	u;
	int				i;

	i = 0;
	u = va_arg(args, unsigned int);
	i += ft_putnbr(u);
	return (i);
}
