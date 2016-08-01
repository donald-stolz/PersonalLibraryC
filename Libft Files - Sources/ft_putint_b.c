#include "ft_output.h"
#include "ft_strtools.h"

/*
** ft_putint_b, to print out characters in any base.
** If you call this directly you must pass in minimum digits & a format string.
** Format string index=0 is negative symbol.
** The symbol for value 0 starts from index=1.
** min_d is minimum digits to print (including negative symbol).
** negative symbol is always considered a digit.
*/

void	ft_putint_b(int n, t_uint base, t_uint min_d, const char *format)
{
	t_uint	num_digits;
	char	int_string[33];
	int		i;

	num_digits = ft_count_digits(n, base);
	if (num_digits < min_d)
		num_digits = min_d;
	int_string[num_digits] = 0;
	ft_strnfill(int_string, format[1], num_digits);
	if (n < 0)
	{
		int_string[0] = format[0];
		n = -n;
	}
	i = num_digits - 1;
	while (n)
	{
		int_string[i] = format[1 + (n % base)];
		i--;
		n /= base;
	}
	ft_putstr(int_string);
}

void	ft_putint_binary(int n, t_uint min_d)
{
	ft_putint_b(n, 2, min_d, "-01");
}

void	ft_putint_o(int n, t_uint min_d)
{
	ft_putint_b(n, 8, min_d, "-01234567");
}

void	ft_putint_d(int n, t_uint min_d)
{
	ft_putint_b(n, 10, min_d, "-0123456789");
}

void	ft_putint_h(int n, t_uint min_d)
{
	ft_putint_b(n, 16, min_d, "-0123456789ABCDEF");
}
