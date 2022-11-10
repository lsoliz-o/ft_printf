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

int ft_printf_x(va_list args, int width, int precision)
{
    int     count;
    char    *str;
    int     i;

    count = 0;
    i = 0;
    str = ft_itoa_base(va_arg(args, unsigned int), 16);
    if (width > ft_strlen(str))
    {
        while (width-- > ft_strlen(str))
        {
            write(1, " ", 1);
            count++;
        }
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        count++;
        i++;
    }
    return (count);
}

int ft_printf_X(va_list args, int width, int precision)
{
    int     count;
    char    *str;
    int     i;

    count = 0;
    i = 0;
    str = ft_itoa_base(va_arg(args, unsigned int), 16);
    if (width > ft_strlen(str))
    {
        while (width-- > ft_strlen(str))
        {
            write(1, " ", 1);
            count++;
        }
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        count++;
        i++;
    }
    return (count);
}
