/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:53:40 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/18 20:53:44 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(va_list args, int count)
{
	return (ft_putstr(va_arg(args, char *), count));
}

int	ft_print_char(va_list args, int count)
{
	ft_putchar(va_arg(args, int), count);
	return (1);
}

int	ft_print_nbr(va_list args, int count)
{
	return (ft_putnbr(va_arg(args, int), count));
}

int	ft_print_ptr(va_list args, int count)
{
	return (ft_pointer(va_arg(args, void *), count));
}

int	ft_print_unsigned(va_list args, int count)
{
	return (ft_unsigned_decimal(va_arg(args, unsigned int),count));
}
