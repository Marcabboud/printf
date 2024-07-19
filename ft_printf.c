#include <ft_printf.h>
#include <stdarg.h>
#include <stddef.h>

static int	is_charset(char c)
{
	char		*s;
	size_t		i;

	s = NULL;
	s = "cspdiuxX%";
	i = 0;
	while (s[i])
	{
		if (s[i++] == c)
			return (1);
	}
}

static int	hex_flags(va_list args, char c)
{
	unsigned long long int	nb;

	if (c == 'p')
	{
		nb = (unsigned long)va_arg(args, void *);
		if (nb == 0)
			return (ft_putstr("(nil)"));
		ft_putstr("0x");
		return (ft_bputnbr(nb, "0123456789abcdef") + 2);
	}
	nb = (unsigned long long int)va_arg(args, unsigned int);
	if (c == 'x')
		return (ft_bputnbr(nb, "0123456789abcdef"));
	else if (c == 'X')
		return (ft_bputnbr(nb, "0123456789ABCDEF"));
	return (0);
}

static int	gest_flags(va_list args, char c)
{
	

