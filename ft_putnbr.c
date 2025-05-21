#include "ft_printf.h"

int ft_putnbr(int n)
{
    int len;

    len = 0;
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n == 0)
        return (ft_putchar('0'));
    if (n < 0)
    {
        if (ft_putchar('-') == -1)
            return (-1);
        n *= -1;
        len++;
    }
    len += ft_print_unsig(n);
    return (len);
}
