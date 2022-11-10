/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:28:55 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:28:55 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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