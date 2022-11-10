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

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
char ft_strchr(const char *s, int c)
{
    while (*s != (char)c)
    {
        if (!*s++)
            return (NULL);
    }
    return ((char *)s);
}
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_itoa(int n)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = 0;
    if (n < 0)
    {
        n = n * -1;
        j = 1;
    }
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    str = (char *)malloc(sizeof(char) * (i + j + 1));
    if (!str)
        return (NULL);
    str[i + j] = '\0';
    while (i > 0)
    {
        str[i + j - 1] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    if (j == 1)
        str[0] = '-';
    return (str);
}
int ft_itoa_base(unsigned int n, char *base)
{
    int i;
    int j;
    int len;
    char *str;

    i = 0;
    j = 0;
    len = ft_strlen(base);
    while (n > 0)
    {
        n = n / len;
        i++;
    }
    str = (char *)malloc(sizeof(char) * (i + j + 1));
    if (!str)
        return (NULL);
    str[i + j] = '\0';
    while (i > 0)
    {
        str[i + j - 1] = base[n % len];
        n = n / len;
        i--;
    }
    return (str);
}
int ft_atoi(const char *str)
{
    int     sign;
    int     num;
    int     i;

    sign = 1;
    num = 0;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (num * sign);
}