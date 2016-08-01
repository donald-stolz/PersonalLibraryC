#include "ft_strtools.h"

t_uint	ft_count_digits(int n, t_uint base)
{
	t_uint digits;

	digits = 0;
	if (n <= 0)
	{
		n = -n;
		digits++;
	}
	while (n)
	{
		n /= base;
		digits++;
	}
	return (digits);
}

t_uint	ft_count_digits_nsign(int n, t_uint base)
{
	t_uint digits;

	digits = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		n /= base;
		digits++;
	}
	return (digits);
}
