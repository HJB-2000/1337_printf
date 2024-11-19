#include "libft/libft.h"
#include "ft_printf.h"
int lower_hex_recursive(unsigned int n, int count)
{
    char *hex = "0123456789abcdef";

    if (n > 15)
    {
        count = lower_hex_recursive(n / 16, count);
    }
    write(1, &hex[n % 16], 1);
    count++;
    return (count);
}

int ft_lower_hexa(long int i, int count)
{
    count += lower_hex_recursive((unsigned int)i, count);
    return (count);
}