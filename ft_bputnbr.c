#include "ft_printf.h"
#include <stddef.h>

static size_t	len_nb(unsigned long long int nb)
{
	sizez_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

size_t	ft_putnbrb(unsigned long long int nb, const char *base)
{
	if (nb > 15)
	{
		ft_putnbrb(nb / 16, base);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb]);
	return (len_nb(nb));
}
