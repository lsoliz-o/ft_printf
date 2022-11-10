/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:29:29 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:29:29 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_hex(va_list args, char c)
{
    unsigned int h;
    int          i;

    i = 0;
    h = va_arg(args, unsigned int);
    i += ft_putnbr(h);
    return (i);
}
