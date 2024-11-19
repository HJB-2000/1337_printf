/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:20:45 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/18 20:44:33 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"


int	handle_format(char c, va_list args, int count)
{
	const t_format	formats[] = {
	{'s', ft_print_str},
	{'c', ft_print_char},
	{'d', ft_print_nbr},
	{'i', ft_print_nbr},
	{'p', ft_print_ptr},
	{'u', ft_print_unsigned},
	{'x', ft_print_hex_low},
	{'X', ft_print_hex_up},
	{'%', ft_print_percent},
	{0, NULL}
	};
	int				i;

	i = 0;
	while (formats[i].spec && formats[i].spec != c)
		i++;
	if (formats[i].func)
		return (formats[i].func(args, count));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		printed_count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	printed_count = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed_count += handle_format(format[i + 1], args, count);
			i++;
		}
		else
		{
			printed_count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (printed_count);
}
int main()
{
// 	int a = ft_printf("\001\002\007\v\010\f\r\n");
// 	printf("\n");
// 	int b = printf("\001\002\007\v\010\f\r\n");

// 	printf("\n%d\n%d", a, b);

}