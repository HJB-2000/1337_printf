#include "libft/libft.h"
#include "ft_printf.h"

int ft_putnbr(int i, int count)
{
    int tmp;

    tmp = i;
    if(tmp == 0)
        count++;
    else if (tmp == INT_MIN)
        (count += 11);
    else if(tmp < 0 && tmp != INT_MIN)
    {
        tmp = -tmp;
        count++;
    }
    while(tmp > 0)
    {
        tmp /= 10;
        count++;
    }
    ft_putnbr_fd(i, 1);
    return (count);
}