#include "ft_printf.h"

void 		free_p(char **p)
{
	free(*p);
	p = NULL;
}

int 		search_dot(char *str)
{
	int		i;
	char 	c;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'd')
			c = 'd';
		else if (str[i] == 'i')
			c = 'i';
		i++;
	}
	while (*str != c)
	{
		if (*str == '.')
			return (1);
		str++;
	}
	return (0);
}
