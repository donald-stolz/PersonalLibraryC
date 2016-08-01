#ifndef FT_STRTOOLS_H
# define FT_STRTOOLS_H

# include "ft_typedefs.h"

void	ft_strfill(char *str, char c);

t_uint	ft_count_digits(int n, t_uint base);

int		ft_is_numeric(char c);

int		ft_is_space(char c);

int		ft_atoi(char *str);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

void	ft_strnfill(char *str, char c, t_uint n);

void	ft_strncpy(char *dest, char *src, t_uint n);

void	ft_swap(int *a, int *b);

#endif
