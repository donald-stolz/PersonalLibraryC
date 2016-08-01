#ifndef TEMPLATE_H
# define TEMPLATE_H

# include <standard library headers>
# include "local header files"

# define NUM 5
// Replaces all instances of 'NUM' in preprocessed code with '5'
// i.e " x = NUM;  --->  x = 5;""
# ifndef T_UINT
#  define T_UINT
typedef	unsigned int	t_uint;
// Replace type "t_uint" with variable type unsigned int
// "typedef 'variable type' 'name"
# endif

typedef	struct	s_point
{
	int x;
	int y;
}				t_point;
//  Creates struct s_point; names type "t_point".
//  See structures.txt

void	function(char arguments);
// Declaring prototype of return type void, which takes char arguments.
// "'return type'	'function name'('variable type' 'name' ...);"
#endif