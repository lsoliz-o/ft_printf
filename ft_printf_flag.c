/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:16:37 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/17 16:23:54 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flags_init(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->dot = -1;
	flags->width = 0;
	flags->plus = 0;
	flags->type = 0;
}

void	flags_minus(char *str, t_flags *flags)
{
	if (str[0] == '-')
		flags->zero = 1;
}

void	flags_plus(char *str, t_flags *flags)
{
	int	i;

	i = 0;
	if (flags->plus == 1)
	{
		if (i == 0)
			write (1, "+", 1);
	}
}

void	flags_type(char *str, t_flags *flags)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'c')
			flags->type = 1;
		if (str[i] == 's')
			flags->type = 2;
		if (str[i] == 'p')
			flags->type = 3;
		if (str[i] == 'd')
			flags->type = 4;
		if (str[i] == 'u')
			flags->type = 5;
		if (str[i] == 'x')
			flags->type = 6;
		if (str[i] == 'X')
			flags->type = 7;
		if (str[i] == '%')
			flags->type = 8;
		i++;
	}
}

if (*format == 'c')
		i += ft_printf_c(args, flags);
	else if (*format == 's')
		i += ft_printf_s(args, flags);
	else if (*format == 'p')
		i += ft_printf_p(args);
	else if (*format == 'd' || *format == 'i')
		i += ft_printf_d(args, flags);
	else if (*format == 'u')
		i += ft_printf_x(args);
	else if (*format == 'x')
		i += ft_printf_hex(args, *format);
	else if (*format == 'X')
		i += ft_printf_h(args, *format);
	else if (*format == '%')
		i += ft_printf_percent(args);
	return (i);
}

int	ft_printf_flag(char *str, va_list args, t_flags *flags)
{
	int	i;

	i = 0;
	flags_init(flags);
	flags_minus(str, flags);
	flags_plus(str, flags);
	flags_type(str, flags);
	if (flags->type == 1)
		return (ft_printf_c(args, flags));
	if (flags->type == 2)
		return (ft_printf_s(args, flags));
	if (flags->type == 3)
		return (ft_printf_p(args));
	if (flags->type == 4)
		return (ft_printf_d(args, flags));
	if (flags->type == 5)
		return (ft_printf_x(args, flags));
	if (flags->type == 6)
		return (ft_printf_hex(args, *format));
	if (flags->type == 7)
		return (ft_printf_h(args, *format));
	if (flags->type == 8)
		return (ft_printf_percent(args, flags));
	return (0);
}