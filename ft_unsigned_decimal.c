#include "libft/libft.h"
#include "ft_printf.h"

void	ft_putnbr_unsinned(unsigned int n, int fd, int count)
{
	char	c;
	if (n >= 10)
	{
		ft_putnbr_unsinned((n / 10), fd, count);
		ft_putnbr_unsinned((n % 10), fd, count);
	}
	else if (n >= 0)
	{
		c = n + 48;
		ft_putchar_fd(c, fd);
	}
}
int ft_unsigned_decimal(unsigned int i, int count)
{
    unsigned int tmp;

    tmp = i;
	if(tmp == 0)
        count++;
    while(tmp > 0)
    {
        tmp /= 10;
        count++;
    }
    ft_putnbr_unsinned(i, 1, count);
    return (count);
}

