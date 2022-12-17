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

FILES = ft_printf ft_printf_c  \
	ft_printf_x ft_printf_utils ft_printf_hex \
	 ft_printf_flag

FILES_B = ft_printf_width_bonus ft_printf  \
	 ft_printf_x ft_printf_utils ft_printf_hex

INC = ft_printf.h

SRCS_DIR = ./src

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./

OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

NAME_B = .
$(NAME) : $(OBJS)
	$(AR) $@ $^

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INC)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

bonus:	$(NAME_B)

$(NAME_B):		$(OBJS) $(OBJS_B)
		@ar rc $(NAME) $(OBJS) $(OBJS_B)
		@touch $(NAME_B)

.PHONY: all clean fclean re bonus
