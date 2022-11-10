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
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int ft_printf_c(va_list args, int width, int precision);
int ft_printf_s(va_list args, int width, int precision);
int ft_printf_percent(va_list args, int width, int precision);
int ft_printf_d(va_list args, int width, int precision);
int ft_printf_i(va_list args, int width, int precision);
int ft_printf_u(va_list args, int width, int precision);
int ft_printf_x(va_list args, int width, int precision);
//int ft_printf_X(va_list args, int width, int precision);
int ft_printf_p(va_list args, int width, int precision);
int ft_printf_parser(const char *format, int *i, va_list args);
int ft_printf_width(int width, int len, int zero);
int ft_printf_precision(int precision, int len);
int ft_printf_putchar(char c);
int ft_printf_putstr(char *s);
int ft_printf_putnbr(int n);
int ft_printf_putnbr_u(unsigned int n);
int ft_printf_putnbr_x(unsigned int n, char *base);
int ft_printf_putnbr_p(unsigned long n);
int ft_printf_strlen(char *s);
int ft_printf_atoi(const char *str);
int ft_printf_isdigit(int c);
int ft_printf_isalpha(int c);
int ft_printf_isalnum(int c);
#endif
