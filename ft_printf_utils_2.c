/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:53:49 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/18 20:53:51 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hex_low(va_list args, int count)
{
	return (ft_lower_hexa(va_arg(args, int), count));
}

int	ft_print_hex_up(va_list args, int count)
{
	return (ft_upper_hexa(va_arg(args, int), count));
}

int	ft_print_percent(va_list args, int count)
{
	(void)args;
	ft_putchar('%', count);
	return (1);
}
