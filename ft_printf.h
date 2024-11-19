#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#define HANDLE_WRITE(result, action) \
    do { \
        if ((result) == -1) \
            return -1; \
        else \
            (action); \
    } while (0)
#include <limits.h>
# include <stdarg.h>
#include <stdio.h>

typedef int	(*t_func)(va_list, int);

typedef struct s_format
{
	char	spec;
	t_func	func;
}	t_format;

int		ft_printf(const char *format, ...);
int	ft_putchar(char c, int count);
int		ft_putstr(char *str, int count);
int		ft_putnbr(int i, int count);
int		ft_pointer(void *ptr, int count);
int		ft_unsigned_decimal(unsigned int i, int count);
void	ft_putnbr_unsinned(unsigned int n, int fd, int count);
int		ft_lower_hexa(long int i, int count);
int		ft_upper_hexa(long int i, int count);

int		print_hex_recursive(unsigned long n, int count);
int		lower_hex_recursive(unsigned int n, int count);
int		upper_hex_recursive(unsigned long n, int count);

/* ft_printf utils */
int		ft_printf(const char *format, ...);
int		ft_print_str(va_list args, int count);
int		ft_print_char(va_list args, int count);
int		ft_print_nbr(va_list args, int count);
int		ft_print_ptr(va_list args, int count);
int		ft_print_unsigned(va_list args, int count);
int		ft_print_hex_low(va_list args, int count);
int		ft_print_hex_up(va_list args, int count);
int		ft_print_percent(va_list args, int count);
int	handle_format(char c, va_list args, int count);
#endif