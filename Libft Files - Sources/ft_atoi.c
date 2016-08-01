#include "ft_strtools.h"

int	ft_atoi(char *str)
{
	int to_add;
	int value;

	to_add = 1;
	value = 0;
	while (*str && ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			to_add = 0;
		str++;
	}
	while (ft_is_numeric(*str))
	{
		value *= 10;
		if (to_add)
			value += (*str) - '0';
		else
			value -= (*str) - '0';
		str++;
	}
	return (value);
}
