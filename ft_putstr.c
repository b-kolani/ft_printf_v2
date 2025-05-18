#include "ft_printf.h"

int ft_putstr(const char *str)
{
    int i;
    int len;

    i = -1;
    len = 0;
    while (str[++i])
    {
        if (ft_putchar(str[i]) == -1)
            return (-1);
        len++; 
    }
    return (len);
}
