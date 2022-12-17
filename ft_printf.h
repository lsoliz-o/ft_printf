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

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	dot;
	int	width;
	int	plus;
	int	type;
}	t_flags;

void	flags_init(t_flags *flags);
void	flags_minus(char *str, t_flags *flags);
void	flags_plus(char *str, t_flags *flags);
void	flags_type(char *str, t_flags *flags);
int		ft_printf_width(int width, int minus, int zero);
int		ft_printf_param(const char *format, va_list args, t_flags *flags);
int		ft_printf(const char *format, ...);
int		ft_printf_s(va_list args, t_flags *flags);
int		ft_printf_c(va_list args, t_flags *flags);
int		ft_printf_d(va_list args, t_flags *flags);
int		ft_printf_u(va_list args, t_flags *flags);
int		ft_printf_x(va_list args);
int		ft_printf_p(va_list args);
int		ft_printf_hex(va_list args, char c);
int		ft_printf_percent(va_list args);
int		ft_putnbr(unsigned int n);
char	*ft_itoa_base(unsigned long long int n, int base);
int		ft_printf_h(va_list args, char c);
char	*ft_itoa_b(unsigned long long int n, int base);
//bonus
int	ft_printf_flag(char *str, va_list args, t_flags *flags);

#endif
