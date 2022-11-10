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
                count += ft_printf_h(args, *format);
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
int ft_printf_c(va_list args)
{
    char c;

    c = va_arg(args, int);
    write(1, &c, 1);
    return (1);
}

int ft_printf_s(va_list args)
{
    char *str;
    int  i;

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

int ft_printf_p(va_list args)
{
    unsigned long long int p;
    int                    i;
    char                   *str;

    i = 0;
    p = va_arg(args, unsigned long long int);
    str = ft_itoa_base(p, 16);
    write(1, "0x", 2);
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i + 2);
}

int ft_printf_d(va_list args)
{
    int d;
    int i;

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

int ft_printf_u(va_list args)
{
    unsigned int u;
    int          i;

    i = 0;
    u = va_arg(args, unsigned int);
    i += ft_putnbr(u);
    return (i);
}

int ft_printf_x(va_list args)
{
    unsigned int x;
    int          i;

    i = 0;
    x = va_arg(args, unsigned int);
    i += ft_putnbr(x);
    return (i);
}

int ft_printf_h(va_list args, char c)
{
    unsigned int h;
    int          i;

    i = 0;
    h = va_arg(args, unsigned int);
    i += ft_putnbr(h);
    return (i);
}

int ft_printf_percent(va_list args)
{
    write(1, "%", 1);
    return (1);
}

int ft_printf_width(va_list args, int width, int zero)
{
    int i;

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

int ft_putnbr(int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
        i++;
    }
    if (n >= 10)
    {
        i += ft_putnbr(n / 10);
        i += ft_putnbr(n % 10);
    }
    else
    {
        n += '0';
        write(1, &n, 1);
        i++;
    }
    return (i);
}

char *ft_itoa_base(unsigned long long int n, int base)
{
    char                    *str;
    unsigned long long int  tmp;
    int                     i;

    i = 0;
    tmp = n;
    while (tmp /= base)
        i++;
    str = (char *)malloc(sizeof(char) * (i + 2));
    str[i + 1] = '\0';
    while (i >= 0)
    {
        if (n % base < 10)
            str[i] = n % base + '0';
        else
            str[i] = n % base + 'a' - 10;
        n /= base;
        i--;
    }
    return (str);
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
