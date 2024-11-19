# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 17:32:42 by jbahmida          #+#    #+#              #
#    Updated: 2024/11/14 17:32:43 by jbahmida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
LIBFT = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
HEADER = ft_printf.h
SRCS = ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_pointer.c\
	ft_unsigned_decimal.c\
	ft_upper_hexa.c\
	ft_lower_hexa.c\
	ft_printf_utils.c\
	ft_printf_utils_2.c
SRCS_OBJ = $(SRCS:.c=.o)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft
	cp libft/libft.a .

$(NAME): $(SRCS_OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(SRCS_OBJ)

clean:
	rm -f $(SRCS_OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re



