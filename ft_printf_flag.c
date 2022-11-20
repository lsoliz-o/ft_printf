/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:16:37 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/20 18:49:37 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hashtag(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'x')
		i += ft_printf_hex(args, *format);
	else if (*format == 'X')
		i += ft_printf_h(args, *format);
	else
		ft_printf_width(args, 1, 0);
	return (i);
}

int	ft_printf_flag_0(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'd' || *format == 'i')
		i += ft_printf_d(args);
	else if (*format == 'u')
		i += ft_printf_x(args);
	else if (*format == 'x')
		i += ft_printf_hex(args, *format);
	else if (*format == 'X')
		i += ft_printf_h(args, *format);
	else
		ft_printf_width(args, 1, 0);
	return (i);
}

int	ft_printf_flag(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == '#')
		i += ft_printf_hashtag(format, args);
	else if (*format == '.')
		i += ft_printf_presicion(format, args);
	else if (*format == '0')
		i += ft_printf_flag_0(format, args);
	else
		i += ft_printf_flag(format, args);
	return (i);
}
