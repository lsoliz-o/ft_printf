/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:30:49 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:30:49 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf_s(va_list args, int width, int precision)
{
    int     count;
    char    *str;

    count = 0;
    str = va_arg(args, char *);
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