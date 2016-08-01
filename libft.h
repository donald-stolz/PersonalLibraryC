#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

# ifndef T_UINT
#  define T_UINT

typedef	unsigned int	t_uint;

# endif

# ifndef T_BYTE
#  define T_BYTE

typedef	unsigned char	t_byte;

void	ft_putchar(char c);

void	ft_putchar_f(char c, int fd);

void	ft_putstr(char *str);

void	ft_putstr_f(char *str, int fd);

void	ft_putint_b(int n, t_uint base, t_uint min_d, const char *format);

void	ft_putint_bin(int n, t_uint min_d);

void	ft_putint_o(int n, t_uint min_d);

void	ft_putint_d(int n, t_uint min_d);

void	ft_putint_h(int n, t_uint min_d);

void	ft_putnbr(int nb);

void	ft_strfill(char *str, char c);

t_uint	ft_count_digits(int n, t_uint base);

int		ft_is_numeric(char c);

int		ft_is_space(char c);

int		ft_atoi(char *str);

int		ft_strcmp(char *s1, char *s2);

void	ft_strnfill(char *str, char c, t_uint n);

void	ft_strncpy(char *dest, char *src, t_uint n);

void	ft_swap(int *a, int *b);

int		ft_strlen(char *str);

#endif