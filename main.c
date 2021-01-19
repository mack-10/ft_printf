#include "ft_printf.h"

int main(void)
{
	int ret;

	printf("p\n");
	int a = 12;
	ret = printf("|%5.d|", a);
	printf("\tret: %d\n", ret);
	ret = ft_printf("|%5.d|", a);
	printf("\tret: %d\n", ret);
	printf("\n\n");

	/*printf("----------di----------\n");
	printf("+\n");
	int p_d = 123;
	ret = printf("flag -\t\t\t|%-6d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5d|", p_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:10, pre:5\t|%10.5d|", p_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:10, pre:5\t|%10.5d|", p_d);
	printf("\tret: %d\n\n", ret);

	printf("-\n");
	int m_d = -123;
	ret = printf("flag -\t\t\t|%-6d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6d|", m_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06d|", m_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6d|", m_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6d|", m_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6d|", m_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2d|", m_d);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5d|", m_d);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5d|", m_d);
	printf("\tret: %d\n\n", ret);

	printf("0\n");
	ret = printf("flag -\t\t\t|%-6d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6d|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06d|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6d|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6d|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6d|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2d|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5d|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5d|", 0);
	printf("\tret: %d\n\n", ret);*/

	/*printf("----------u----------\n");
	printf("+\n");
	unsigned int p_i = 123;
	ret = printf("flag -\t\t\t|%-6u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6u|", p_i);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06u|", p_i);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6u|", p_i);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6u|", p_i);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6u|", p_i);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2u|", p_i);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5u|", p_i);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5u|", p_i);
	printf("\tret: %d\n\n", ret);

	printf("0\n");
	ret = printf("flag -\t\t\t|%-6u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6u|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06u|", 0);
	printf("\tret: %d\n\n", ret);
	 ret = printf("flag 0, pre\t\t|%06.2u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0, pre\t\t|%06.2u|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6u|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6u|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6u|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2u|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5u|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5u|", 0);
	printf("\tret: %d\n\n", ret);*/

	/*printf("----------X----------\n");
	printf("+\n");
	unsigned int p_x = 123;
	ret = printf("flag -\t\t\t|%-6X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5X|", p_x);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:10, pre:5\t|%10.5X|", p_x);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:10, pre:5\t|%10.5X|", p_x);
	printf("\tret: %d\n\n", ret);

	printf("0\n");
	ret = printf("flag -\t\t\t|%-6X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%06X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0, pre\t\t|%06.2X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0, pre\t\t|%06.2X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-6X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6\t\t\t|%6X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:6\t\t\t|%.6X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:2\t|%6.2X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:6, pre:5\t|%6.5X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5X|", 0);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:10, pre:5\t|%10.5X|", 0);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:10, pre:5\t|%10.5X|", 0);
	printf("\tret: %d\n\n", ret);*/


	/*printf("----------x----------\n");
	printf("flag -\t\t\t:%-6x\n", p);
	printf("flag 0\t\t\t:%-6x\n", p);
	printf("flag complex\t:%0-6x\n", p);
	printf("w=6\t\t\t\t:%6x\n", p);
	printf("p=6\t\t\t\t:%.6x\n", p);
	printf("w=6/p=2\t\t\t:%6.2x\n", p);*/

	/*printf("----------p----------\n");
	int n = 12;
	ret = printf("flag -\t\t\t|%-20p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag -\t\t\t|%-6p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0\t\t\t|%020p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0\t\t\t|%06p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("flag 0-\t\t\t|%0-20p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("flag 0-\t\t\t|%0-6p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:20\t\t\t|%20p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6\t\t\t|%6p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("pre:9\t\t\t|%.9p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("pre:6\t\t\t|%.6p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:20, pre:9\t|%20.9p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:2\t|%6.2p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:20, pre:9\t|%20.9p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:6, pre:5\t|%6.5p|", p);
	printf("\tret: %d\n\n", ret);
	ret = printf("wid:10, pre:5\t|%10.5p|", &n);
	printf("\tret: %d\n", ret);
	ret = ft_printf("wid:10, pre:5\t|%10.5p|", p);
	printf("\tret: %d\n\n", ret);*/
	return (0);
}
