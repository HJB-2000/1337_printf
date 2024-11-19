#include "libft/libft.h"
#include "ft_printf.h"
int print_hex_recursive(unsigned long n, int count) 
{
    char *hex = "0123456789abcdef";

    if (n > 15) {
        count = print_hex_recursive(n / 16, count);
    }
    write(1, &hex[n % 16], 1);
    count++;
    return count;
}

int ft_pointer(void *ptr, int count)
{
    if (ptr == NULL)
    {
        count += write(1, "0x0", 3);
        return(count);
    }
    count += write(1, "0x", 2);
    unsigned long addr = (unsigned long)ptr;
    count += print_hex_recursive(addr, 0); // Start with count = 0
    return (count);
}
