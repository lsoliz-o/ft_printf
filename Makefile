# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoliz-o <lsoliz-o@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 22:55:09 by lsoliz-o          #+#    #+#              #
#    Updated: 2022/11/08 22:55:09 by lsoliz-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
GFLAGS = gcc -Wall -Werror -Wextra
AR = @ar rcs
RM = rm -f

FILES = ft_printf ft_printf_c ft_printf_d ft_printf_p ft_printf_s \
	ft_printf_x ft_printf_percent ft_printf_utils ft_printf_h ft_printf_width

INC = ft_printf.h
SRCS_DIR = ./src

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./

OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INC)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
