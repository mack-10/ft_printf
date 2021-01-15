#include "ft_printf.h"

void 		free_p(char **p)
{
	free(*p);
	p = NULL;
}
