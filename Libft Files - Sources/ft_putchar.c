#include <unistd.h>
#include "ft_output.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_f(char c, int fd)
{
	write(fd, &c, 1);
}
