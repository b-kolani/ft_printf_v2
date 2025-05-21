#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "unistd.h"
#include "stdarg.h"
#include "stdio.h"

int ft_putchar(int c);
int ft_putstr(const char *str);
int ft_putnbr(int n);
int ft_putunsig(unsigned int n);
int ft_putptr(size_t addr);
int ft_puthex(size_t n, char fmt_spec);
int ft_print_unsig(unsigned int n);

int ft_printf(const char *fmt, ...);

#endif