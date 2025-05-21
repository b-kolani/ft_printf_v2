#include "ft_printf.h"

static int ft_print_ptr(size_t addr, char *digits)
{
    int len;

    len = 0;
    if (addr == 0)
        return (0);
    len += ft_print_ptr(addr / 16, digits);
    if (len == 0)
    {
        if (ft_putstr("0x") == -1)
            return (-1);
        len += 2;
    }
    if (ft_putchar(digits[addr % 16]) == -1)
        return (-1);
    return (len + 1);
}
int ft_putptr(size_t addr)
{
    int len;
    char *digits;

    digits = "0123456789abcdef";
    len = 0;
    if (addr == 0)
        return (ft_putstr("(nil)"));
    len += ft_print_ptr(addr, digits);
    return (len);
}
