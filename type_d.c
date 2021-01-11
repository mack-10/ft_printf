#include "ft_printf.h"

int		type_d(va_list ap, char *str, int size)
{
	int cnt;

	cnt = 2;
	printf("%d", va_arg(ap, int));
	return (cnt);
}
