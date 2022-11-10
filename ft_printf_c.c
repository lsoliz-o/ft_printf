/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:28:08 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:28:08 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf_c(va_list args, int width, int precision)
{
    int     count;
    char    c;

    count = 0;
    c = va_arg(args, int);
    if (width > 1)
    {
        while (width-- > 1)
        {
            write(1, " ", 1);
            count++;
        }
    }
    write(1, &c, 1);
    count++;
    return (count);
}