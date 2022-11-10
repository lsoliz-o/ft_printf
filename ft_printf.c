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

int ft_printf(const char *format, ...)
{
    int     count;
    va_list args;

    count = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                count += ft_printf_c(args);
            else if (*format == 's')
                count += ft_printf_s(args);
            else if (*format == 'p')
                count += ft_printf_p(args);
            else if (*format == 'd' || *format == 'i')
                count += ft_printf_d(args);
            else if (*format == 'u')
                count += ft_printf_x(args);
            else if (*format == 'x' || *format == 'X')
                count += ft_printf_hex(args, *format);
            else if (*format == '%')
                count += ft_printf_percent(args);
            else
                count += ft_printf_width(args, 1, 0);
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
