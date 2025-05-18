#include "ft_printf.h"

int ft_putunsig(unsigned int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (0);
    len += ft_putunsig(n / 10);
    if (ft_putchar((n % 10) + '0') == -1)
        return (-1);
    return (1 + len);
}
