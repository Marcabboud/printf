#include "ft_printf.h"
#include <stddef.h>

static size_t	len_nb(long long int nb)
{
	size_t	c;

	c = 0;
	if (nb < 0)
	{
		nb /= 10;
		c++;
	}
	while (nb > 0)
	{
		nb /= 10;
		c++;
	}
	if (nb == 0)
		return (1);
	return (c);
}

int	ft_putnbr(int n)
{
	long long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb % 10 + '0');
	return (len_nb(n));
}
