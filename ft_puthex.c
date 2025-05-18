#include "ft_printf.h"

static int ft_print_hex(size_t n, char *digits)
{
    int len;

    if (n == 0)
        return (0);
    len = ft_print_hex((n / 16), digits);
    if (ft_putchar(digits[n % 16]) == -1)
        return(-1);
    return (1 + len);
}

int ft_puthex(size_t n, char fmt_spec)
{
    int len;
    char    *hex_digits;

    len = 0;
    if (fmt_spec == 'x')
        hex_digits = "0123456789abcdef";
    else if (fmt_spec == 'X')
        hex_digits = "0123456789ABCDEF";
    len += ft_print_hex(n, hex_digits);
    return (len);
}
