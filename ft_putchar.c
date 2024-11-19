#include "libft/libft.h"
#include "ft_printf.h"

int ft_putchar(char c, int count)
{
    ft_putchar_fd(c, 1);
    count++;
    return(count);
}