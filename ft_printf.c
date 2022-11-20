/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:02:00 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:02:00 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_param(const char *format, va_list args)
{
	int		i;

	i = 0;
	if (*format == 'c')
		i += ft_printf_c(args);
	else if (*format == 's')
		i += ft_printf_s(args);
	else if (*format == 'p')
		i += ft_printf_p(args);
	else if (*format == 'd' || *format == 'i')
		i += ft_printf_d(args);
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

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_print_param(format, args);
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