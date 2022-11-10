/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:29:29 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:29:29 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf_h(va_list args, int width, int precision)
{
    int     count;
    int     d;
    char    *str;

    count = 0;
    d = va_arg(args, int);
    str = ft_itoa(d);
    if (width > ft_strlen(str))
    {
        while (width-- > ft_strlen(str))
        {
            write(1, " ", 1);
            count++;
        }
    }
    write(1, str, ft_strlen(str));
    count += ft_strlen(str);
    return (count);
}