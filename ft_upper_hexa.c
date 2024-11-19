#include "libft/libft.h"
#include "ft_printf.h"

int upper_hex_recursive(unsigned long n, int count)
{
    char *hex = "0123456789ABCDEF";

    if (n > 15)
    {
        count = upper_hex_recursive(n / 16, count);
    }
    write(1, &hex[n % 16], 1);
    count++;
    return (count);
}


int ft_upper_hexa(long int i, int count)
{
    count += upper_hex_recursive((unsigned int)i, count);
    return (count);
}