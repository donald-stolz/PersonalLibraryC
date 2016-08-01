#include "ft_strtools.h"

int	ft_is_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r' || c == '\f' || c == '\v')
		return (1);
	return (0);
}
