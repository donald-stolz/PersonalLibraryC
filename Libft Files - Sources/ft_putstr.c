#include "ft_output.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putstr_f(char *str, int fd)
{
	while (*str)
	{
		ft_putchar_f(*str, fd);
		str++;
	}
}
