#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6); /* pourquoi 6 */
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}
