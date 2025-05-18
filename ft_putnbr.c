#include "ft_printf.h"

int ft_putnbr(int n)
{
    int len;

    len = 0;
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n == 0)
        return (0);
    if (n < 0)
    {
        if (ft_putchar('-') == -1)
            return (-1);
        n *= -1;
        len++;
    }
    len += ft_putnbr(n / 10);
    if (ft_putchar((n % 10) + '0') == -1)
        return (-1);
    return (1 + len);
}
