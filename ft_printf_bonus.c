/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:48:04 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/20 18:47:48 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printf_bonus(const char *format, va_list args)
// {
// 	int		count;
// 	int		prec;

// 	count = 0;
// 	if (*format)
// 	{
// 		format++;
// 		count += ft_printf_format(format, args);
// 	}
// 	else
// 	{
// 		format++;
// 		count += ft_printf_flag(format, args);
// 	}
// 	return (count);
// }

int	ft_printf_b(const char *format, ...)
{
	int		count;
	va_list	args;
	int		bonus;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_printf_flag(format, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
