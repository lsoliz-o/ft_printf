/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:36:30 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/10 19:36:30 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_u(va_list args)
{
    unsigned int u;
    int          i;

    i = 0;
    u = va_arg(args, unsigned int);
    i += ft_putnbr(u);
    return (i);
}