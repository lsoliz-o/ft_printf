/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:34:22 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/17 14:38:02 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//second flags # +
#include "ft_printf.h"

void	ft_printf_width(char *str, t_flags *flags)
{
	int	i;

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