#include "ft_printf.h"

int main(void)
{
	printf("u\n");
	printf("this %u number\n", 2147483648);
	ft_printf("this %u number", 2147483648);
	printf("\n\n");

	//printf("----------d----------\n");
	/*printf("\npositive\n");
	printf("flag -o\t\t:%-*d\n", 6, 123);
	ft_printf("ft/flag -o\t:%-*d\n", 6, 123);
	printf("flag -x\t\t:%*d\n", 6, 123);
	ft_printf("ft/flag -x\t:%*d\n", 6, 123);
	printf("flag 0\t\t:%0*d\n", 6, 123);
	ft_printf("ft/flag 0\t:%0*d\n", 6, 123);
	printf("flag -0\t\t:%-0*d\n", 6, 123);
	ft_printf("ft/flag -0\t:%-0*d\n", 6, 123);
	printf("flag -0-\t:%-0-*d\n", 6, 123);
	ft_printf("ft/flag -0-\t:%-0-*d\n", 6, 123);
	printf("flag -00\t:%-00*d\n", 6, 123);
	ft_printf("ft/flag -00\t:%-00*d\n", 6, 123);
	printf("w=6/p=2\t\t:%*.*d\n", 6, 2, 123);
	ft_printf("ft/w=6/p=2\t:%*.*d\n", 6, 2, 123);
	printf("w=6/p=5\t\t:%*.*d\n", 6, 5, 123);
	ft_printf("ft/w=6/p=5\t:%*.*d\n", 6, 5, 123);
	printf("w=6\t\t\t:%*d\n", 6, 123);
	ft_printf("ft/w=6\t\t:%*d\n", 6, 123);
	printf("p=6\t\t\t:%.*d\n", 6, 123);
	ft_printf("ft/p=6\t\t:%.*d\n", 6, 123);*/

	/*printf("\nzero\n");
	printf("flag -o\t\t:%-*d\n", 6, 0);
	ft_printf("ft/flag -o\t:%-*d\n", 6, 0);
	printf("flag 0\t\t:%0*d\n", 6, 0);
	ft_printf("ft/flag 0\t:%0*d\n", 6, 0);;
	printf("w=6/p=2\t\t:%*.*d\n", 6, 2, 0);
	ft_printf("ft/w=6/p=2\t:%*.*d\n", 6, 2, 0);
	printf("w=6/p=5\t\t:%*.*d\n", 6, 5, 0);
	ft_printf("ft/w=6/p=5\t:%*.*d\n", 6, 5, 0);
	printf("w=6\t\t\t:%*d\n", 6, 0);
	ft_printf("ft/w=6\t\t:%*d\n", 6, 0);
	printf("p=6\t\t\t:%.*d\n", 6, 0);
	ft_printf("ft/p=6\t\t:%.*d\n", 6, 0);*/

	/*printf("\nnegative\n");
	printf("flag -o\t\t:%-*d\n", 6, -123);
	ft_printf("ft/flag -o\t:%-*d\n", 6, -123);
	printf("flag -x\t\t:%*d\n", 6, -123);
	ft_printf("ft/flag -x\t:%*d\n", 6, -123);
	printf("flag 0\t\t:%0*d\n", 6, -123);
	ft_printf("ft/flag 0\t:%0*d\n", 6, -123);
	printf("w=6/p=2\t\t:%*.*d\n", 6, 2, -123);
	ft_printf("ft/w=6/p=2\t:%*.*d\n", 6, 2, -123);
	printf("w=6/p=5\t\t:%*.*d\n", 6, 5, -123);
	ft_printf("ft/w=6/p=5\t:%*.*d\n", 6, 5, -123);
	printf("w=6\t\t\t:%*d\n", 6, -123);
	ft_printf("ft/w=6\t\t:%*d\n", 6, -123);
	printf("p=6\t\t\t:%.*d\n", 6, -123);
	ft_printf("ft/p=6\t\t:%.*d\n", 6, -123);*/
	return (0);
}
