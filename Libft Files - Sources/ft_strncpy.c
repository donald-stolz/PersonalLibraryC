#include "ft_strtools.h"

void	ft_strncpy(char *dest, char *src, t_uint n)
{
	t_uint	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}
