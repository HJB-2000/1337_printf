#include "libft/libft.h"
#include "ft_printf.h"

int ft_putstr(char *str, int count)
{
    int len;

    if (!str)
    {
        count += write(1, "(null)", 6);
        return (count);
    }
    len = ft_strlen(str);
    count += write(1, str, len);
    return (count);
}
