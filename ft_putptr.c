#include "ft_printf.h"

int ft_putptr(size_t addr)
{
    int len;
    char *digits;

    digits = "0123456789abcdef";
    len = 0;
    if (addr == 0)
        return (0);
    len += ft_putptr(addr / 16);
    if (len == 0)
    {
        if (ft_putstr("0x") == -1)
            return (-1);
        len += 2;
    }
    if (ft_putchar(digits[addr % 16]) == -1)
        return (-1);
    return (1 + len);
}
