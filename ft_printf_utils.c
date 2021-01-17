/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 03:36:40 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 20:16:07 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		free_p(char **p)
{
	free(*p);
	p = NULL;
}

int			cnt_size(char *src)
{
	int size;

	size = 0;
	while (src[size])
	{
		if (src[1] == '%')
			return (1);
		else if (src[size] == 'd' || src[size] == 'i')
			break ;
		else if (src[size] == 'u')
			break ;
		else if (src[size] == 'X' || src[size] == 'x')
			break ;
		else if (src[size] == 'p')
			break ;
		else if (src[size] == 'c')
			break ;
		else if (src[size] == 's')
			break ;
		size++;
	}
	return (size + 1);
}

int			search_dot(char *src)
{
	char c;

	c = src[cnt_size(src) - 1];
	while (*src != c)
	{
		if (*src == '.')
			return (1);
		src++;
	}
	return (0);
}

char	*ft_itoa_un(unsigned int n)
{
	char			*str;
	unsigned int	cpy_n;
	int				idx;

	cpy_n = n;
	idx = 0;
	while (cpy_n)
	{
		cpy_n = cpy_n / 10;
		idx++;
	}
	str = (char *)ft_calloc(1, idx + 1);
	str[idx] = 0;
	while (--idx != -1)
	{
		str[idx] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
