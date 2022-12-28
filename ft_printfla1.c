/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfla1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:25:33 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/12/28 15:13:56 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	minus(const char *str);
int	zero(const char *str);
int	dot(const char *str);
int	width(const char *str);
int	plus(const char *str);

int	(*p[5])(const char *str);

int	ft_printfla(const char *str)
{
	int	i;

	i = 0;
	p[0] = minus;
	p[1] = zero;
	p[2] = dot;
	p[3] = width;
	p[4] = plus;
	while (i < 0 || i > 5)
	{
		if (p[i](str) == 1)
			return (i);
		i++;
	}
	return (-1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "-.0*+";
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d", ft_printfla(str));
// 		i++;
// 	}
// 	return (0);
// }
