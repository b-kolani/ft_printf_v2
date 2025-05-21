#include "ft_printf.h"

int ft_print_unsig(unsigned int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (0);
    len += ft_print_unsig(n / 10);
    if (ft_putchar((n % 10) + '0') == -1)
        return (-1);
    return (1 + len);
}

int ft_putunsig(unsigned int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (ft_putchar('0'));
    len = ft_print_unsig(n);
    return (len);
}
