/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:32:38 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:32:38 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(va_list args)
{
	unsigned int	x;
	int				i;

	i = 0;
	x = va_arg(args, unsigned int);
	i += ft_putnbr(x);
	return (i);
}
