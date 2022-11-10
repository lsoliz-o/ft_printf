/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:52:21 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:52:21 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf_width(va_list args, int width, int precision)
{
    int     count;
    char    c;

    count = 0;
    c = ' ';
    if (width > 1)
    {
        while (width-- > 1)
        {
            write(1, &c, 1);
            count++;
        }
    }
    return (count);
}