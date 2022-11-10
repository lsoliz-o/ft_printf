/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:31:09 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:31:09 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf_p(va_list args, int width, int precision)
{
    int     count;
    char    *str;
    char    *hex;

    count = 0;
    str = va_arg(args, char *);
    hex = ft_itoa_base((unsigned long)str, 16);
    if (width > ft_strlen(hex) + 2)
    {
        while (width-- > ft_strlen(hex) + 2)
        {
            write(1, " ", 1);
            count++;
        }
    }
    write(1, "0x", 2);
    write(1, hex, ft_strlen(hex));
    count += ft_strlen(hex) + 2;
    return (count);
}