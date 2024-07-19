#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stddef.h>
# include <stdarg.h>

int		ft_putchar(char c);

int		ft_putstr(const char *str);

size_t	ft_uputnbr(unsigned int n);

size_t	ft_putnbrb(unsigned long long int nb, const char *base);

int		ft_printf(const char *str, ...);

#endif
