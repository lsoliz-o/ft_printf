/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:54:01 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/13 18:52:33 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;

	i = printf("Hello World!");
	printf("\n");
	j = ft_printf("Hello World!");
	printf("\n");
	printf("%d\n", i);
	printf("%d\n", j);
	i = printf(" %u %u", -1, -2);
	printf("\n");
	j = ft_printf(" %u %u", -1, -2);
	printf("\n");
	printf("%d\n", i);
	printf("%d\n", j);
	printf(" %i ", INT_MAX);
	printf("\n");
	ft_printf(" %i ", INT_MAX);
	printf("\n");
	return (0);
}
