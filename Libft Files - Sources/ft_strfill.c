#include "ft_strtools.h"

void	ft_strfill(char *str, char c)
{
	while (*str)
	{
		(*str) = c;
		str++;
	}
}

void	ft_strnfill(char *str, char c, t_uint n)
{
	t_uint i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
}
