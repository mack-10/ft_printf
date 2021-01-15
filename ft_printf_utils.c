#include "ft_printf.h"

void 		free_p(char **p)
{
	free(*p);
	p = NULL;
}

int 		search_dot(char *str)
{
	while (*str != 'd')
	{
		if (*str == '.')
			return (1);
		str++;
	}
	return (0);
}
