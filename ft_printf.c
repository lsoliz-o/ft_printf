/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:02:00 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/28 16:23:20 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_flag(const char *format, va_list args, t_flags flags)
{
	int		i;

	i = 0;
	if (*format == '-')
		i += flags_minus(flags);
	else if (*format == '0')
		i += ft_printf_zero(format, args, flags);
	else if (*format == '.')
		i += ft_printf_dot(format, args, flags);
	else if (*format == '*')
		i += ft_printf_star(format, args, flags);
	else if (*format >= '1' && *format <= '9')
		i += ft_printf_width(format, args, flags);
	else if (*format == 'c' || *format == 's' || *format == 'p'
		|| *format == 'd' || *format == 'i' || *format == 'u'
		|| *format == 'x' || *format == 'X' || *format == '%')
		i += ft_printf_param(format, args, flags);
	return (i);
}

int	ft_printf_param(const char *format, va_list args, t_flags flags)
{
	int		i;

	i = 0;
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

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	t_flags	flags;
	int		i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && format[i + 1])
		{
			format++;
			count += ft_printf_flag(format, args, flags);
		/*	if (*format == 'c' || *format == 's' || *format == 'p'
		|| *format == 'd' || *format == 'i' || *format == 'u'
		|| *format == 'x' || *format == 'X' || *format == '%')
			count += ft_printf_param(format, args, flags);*/
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

/*
int main(void)
{
	int i;
	int j;

	i = printf("Hello World!");
	printf("\n");
	j = ft_printf("Hello World!");
	printf("\n");
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}
*/
