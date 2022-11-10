/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:48:30 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/11/08 23:48:30 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
typedef char *VA_LIST;

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int ft_printf(const char *format, ...);
int ft_printf_s(va_list args);
int ft_printf_c(va_list args);
int ft_printf_d(va_list args);
int ft_printf_u(va_list args);
int ft_printf_x(va_list args);
int ft_printf_p(va_list args);
int ft_printf_hex(va_list args, char c);
int ft_printf_percent(va_list args);
int ft_printf_width(va_list args, int width, int zero);
int ft_putnbr(int n);
char *ft_itoa_base(unsigned long long int n, int base);
#endif
