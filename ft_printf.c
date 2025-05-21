#include "ft_printf.h"

static int handle_fmt_spec(char fmt_spec, va_list arg)
{
    int n;

    n = 0;
    if (fmt_spec == 'c')
        n += ft_putchar(va_arg(arg, int));
    else if (fmt_spec == 's')
        n += ft_putstr(va_arg(arg, char *));
    else if (fmt_spec == 'd' || fmt_spec == 'i')
        n += ft_putnbr(va_arg(arg, int));
    else if (fmt_spec == 'u')
        n += ft_putunsig(va_arg(arg, unsigned int));
    else if (fmt_spec == 'p')
        n += ft_putptr(va_arg(arg, size_t));
    else if (fmt_spec == 'x' || fmt_spec == 'X')
        n += ft_puthex(va_arg(arg, size_t), fmt_spec);
    else
        n += ft_putchar(fmt_spec);
    return (n);
}

int ft_printf(const char *fmt, ...)
{
    int count;
    va_list v;
    int i;

    va_start(v, fmt);
    count = 0;
    i = -1;
    while (fmt[++i])
    {
        if (fmt[i] == '%' && fmt[i + 1])
            count += handle_fmt_spec(fmt[++i], v);
        else
            count += ft_putchar(fmt[i]);
    }
    if (count < 0)
        return (-1);
    va_end(v);
    return (count);
}

int main()
{
    int n, m;
    
    // n = ft_printf("%p %u %d hello %c \n", &num, 188986, -1887, 47);
    // m = printf("%p %u %d hello %c \n", &num, 188986, -1887, 47);
    n = ft_printf("%u\n", -2147483648);
    m = printf("%u\n", -2147483648u);
    fprintf(stderr, "%d %d\n", n,m);
    return (0);
}
