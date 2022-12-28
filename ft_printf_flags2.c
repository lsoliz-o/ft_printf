/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:34:22 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/28 16:50:15 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//second flags # +
#include "ft_printf.h"

int	ft_printf_minus(const char *format, va_list args, t_flags *flags)
{
	int		i;

	i = 0;
	if (*format == '-')
	{
		flags->minus = 1;
		i++;
	}
	return (i);
}

int ft_printf_zero(const char *format, va_list args, t_flags *flags)
{
	int		i;

	i = 0;
	if (*format == '0')
	{
		flags->zero = 1;
		i++;
	}
	return (i);
}

int	ft_printf_dot(const char *format, va_list args, t_flags *flags)
{
	int		i;

	i = 0;
	if (*format == '.')
	{
		flags->dot = 1;
		i++;
	}
	return (i);
}

int	ft_printf_star(const char *format, va_list args, t_flags *flags)
{
	int		i;

	i = 0;
	if (*format == '*')
	{
		flags->star = 1;
		i++;
	}
	return (i);
}

// int	ft_printf_width(const char *format, va_list args, t_flags flags)
// {
// 	int		i;

// 	i = 0;
// 	if (*format >= '1' && *format <= '9')
// 	{
// 		flags.width = 1;
// 		i++;
// 	}
// 	return (i);
// }

