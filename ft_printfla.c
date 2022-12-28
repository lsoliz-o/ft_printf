/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfla.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:26:43 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/27 18:38:17 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	zero(const char *str)
{
	if (str[0] == '0')
		return (1);
	return (0);
}

int	minus(const char *str)
{
	if (str[0] == '-')
		return (1);
	return (0);
}

int	dot(const char *str)
{
	if (str[0] == '.')
		return (1);
	return (0);
}

int	width(const char *str)
{
	if (str[0] == '*')
		return (1);
	return (0);
}

int	plus(const char *str)
{
	if (str[0] == '+')
		return (1);
	return (0);
}
