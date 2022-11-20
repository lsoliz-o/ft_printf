/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:29:29 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:29:29 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(va_list args, char c)
{
	unsigned int	h;
	int				i;
	char			*str;

	i = 0;
	h = va_arg(args, unsigned int);
	str = ft_itoa_base(h, 16);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	free (str);
	return (i);
}

int	ft_printf_h(va_list args, char c)
{
	unsigned int	h;
	int				i;
	char			*str;

	i = 0;
	h = va_arg(args, unsigned int);
	str = ft_itoa_b(h, 16);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	free (str);
	return (i);
}

int	ft_printf_p(va_list args)
{
	unsigned long long int	p;
	int						i;
	char					*str;

	i = 0;
	p = va_arg(args, unsigned long long int);
	str = ft_itoa_base(p, 16);
	write(1, "0x", 2);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	free (str);
	return (i + 2);
}

int	ft_printf_percent(va_list args)
{
	write(1, "%", 1);
	return (1);
}
