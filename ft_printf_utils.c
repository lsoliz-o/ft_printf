/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:26:09 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/09 01:26:09 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n == INT_MIN)
		return (write(1, "2147483648", 10));
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		i++;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
		i++;
	}
	return (i);
}

char	*ft_itoa_base(unsigned long long int n, int base)
{
	char					*str;
	unsigned long long int	tmp;
	int						i;

	i = 0;
	tmp = n;
	while (tmp >= base)
	{
		tmp /= base;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 2));
	str[i + 1] = '\0';
	while (i >= 0)
	{
		if (n % base < 10)
			str[i] = n % base + '0';
		else
			str[i] = n % base + 'a' - 10;
		n /= base;
		i--;
	}
	return (str);
}

char	*ft_itoa_b(unsigned long long int n, int base)
{
	char					*str;
	unsigned long long int	tmp;
	int						i;

	i = 0;
	tmp = n;
	while (tmp >= base)
	{
		tmp /= base;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 2));
	str[i + 1] = '\0';
	while (i >= 0)
	{
		if (n % base < 10)
			str[i] = n % base + '0';
		else
			str[i] = n % base + 'A' - 10;
		n /= base;
		i--;
	}
	return (str);
}
