/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:31:09 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:31:09 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
