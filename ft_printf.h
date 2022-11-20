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

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <ctype.h>

int		ft_print_param(const char *format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_printf_s(va_list args);
int		ft_printf_c(va_list args);
int		ft_printf_d(va_list args);
int		ft_printf_u(va_list args);
int		ft_printf_x(va_list args);
int		ft_printf_p(va_list args);
int		ft_printf_hex(va_list args, char c);
int		ft_printf_percent(va_list args);
int		ft_putnbr(unsigned int n);
char	*ft_itoa_base(unsigned long long int n, int base);
int		ft_printf_h(va_list args, char c);
char	*ft_itoa_b(unsigned long long int n, int base);
//bonus
int		ft_printf_width(va_list args, int width, int zero);
int		ft_printf_presicion(const char *format, va_list arg);
int		ft_printf_hashtag(const char *format, va_list args);
int		ft_printf_flag_0(const char *format, va_list args);
int		ft_printf_flag(const char *format, va_list arg);
int		ft_printf_bonus(const char *format, va_list args);
int		ft_printf_b(const char *format, ...);
#endif
