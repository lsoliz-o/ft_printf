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

// int	ft_printf_width(int width, int minus, int zero)
// {
// 	int	i;

// 	i = 0;
// 	while (minus < width)
// 	{
// 		if (zero)
// 			write(1, "0", 1);
// 		else
// 			write(1, " ", 1);
// 		width -= 1;
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_printf_presicion(const char *format, va_list arg)
// {
// 	int	i;
// 	int	width;
// 	int	zero;

// 	i = 0;
// 	width = 0;
// 	zero = 0;
// 	while (format[i] >= 48 && format[i] <= 57)
// 	{
// 		width = width * 10 + (format[i] - '0');
// 		i++;
// 	}
// 	if (format[i] == 0)
// 	{
// 		zero = 1;
// 		i++;
// 	}
// 	return (ft_printf_width(width, -1, zero));
// }
