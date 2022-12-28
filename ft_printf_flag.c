/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:16:37 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/28 16:43:25 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flags_init(t_flags flags)
{
	flags.minus = 0;
	flags.zero = 0;
	flags.dot = -1;
	flags.width = 0;
	flags.plus = 0;
	flags.type = 0;
	flags.star = 0;
}

int	flags_minus(t_flags flags)
{
	flags.minus = 1;
	flags.zero = 0;
	return (1);
}

int	flags_plus(char *str, t_flags flags)
{
	int	i;

	i = 0;
	if (flags.plus == 1)
	{
		if (i == 0)
			write (1, "+", 1);
	}
	return (i);
}

int	ft_printf_width(const char *format, va_list args, t_flags flags)
{
	int		i;

	i = 0;
	if (*format >= '1' && *format <= '9')
	{
		flags.width = 1;
		i++;
	}
	return (i);
}

/*
void	flags_type(char *str, t_flags flags)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'c')
			flags->type = 1;
		if (str[i] == 's')
			flags->type = 2;
		if (str[i] == 'p')
			flags->type = 3;
		if (str[i] == 'd')
			flags->type = 4;
		if (str[i] == 'u')
			flags->type = 5;
		if (str[i] == 'x')
			flags->type = 6;
		if (str[i] == 'X')
			flags->type = 7;
		if (str[i] == '%')
			flags->type = 8;
		i++;
	}
}*/
