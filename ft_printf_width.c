/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:52:21 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:52:21 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_width(va_list args, int width, int zero)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (zero)
			write(1, "0", 1);
		else
			write(1, " ", 1);
		i++;
	}
	return (i);
}

int	ft_printf_flag(const char *format, va_list arg)
{
	int	i;
	int	width;
	int	zero;

	i = 0;
	width = 0;
	zero = 0;
	while (format[i] >= '0' && format[i] <= '9')
	{
		width = width * 10 + (format[i] - '0');
		i++;
	}
	if (format[i] == 0)
	{
		zero = 1;
		i++;
	}
	return (ft_printf_width(arg, width, zero));
}
