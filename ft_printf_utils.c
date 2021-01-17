/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 03:36:40 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 20:01:03 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		free_p(char **p)
{
	free(*p);
	p = NULL;
}

int			cnt_size(char *str)
{
	int size;

	size = 0;
	while (str[size])
	{
		if (str[1] == '%')
			return (1);
		else if (str[size] == 'd' || str[size] == 'i')
			break ;
		else if (str[size] == 'u')
			break ;
		else if (str[size] == 'X' || str[size] == 'x')
			break ;
		else if (str[size] == 'p')
			break ;
		else if (str[size] == 'c')
			break ;
		else if (str[size] == 's')
			break ;
		size++;
	}
	return (size + 1);
}

int			search_dot(char *str)
{
	char c;

	c = str[cnt_size(str) - 1];
	while (*str != c)
	{
		if (*str == '.')
			return (1);
		str++;
	}
	return (0);
}
