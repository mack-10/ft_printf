/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 03:36:40 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/18 03:24:36 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		free_p(t_list **p1, char **p2)
{
	if (p1)
	{
		free(*p1);
		p1 = NULL;
	}
	else
	{
		free(*p2);
		p2 = NULL;
	}
}

int			cnt_add(t_list *lst)
{
	char	*src;
	int		cnt;

	src = lst->src;
	cnt = 0;
	while (src[cnt])
	{
		if (src[0] == '%' && src[1] == '%')
			return (2);
		if (src[cnt] == 'd' || src[cnt] == 'i' || src[cnt] == 'u'
				|| src[cnt] == 'X' || src[cnt] == 'x' || src[cnt] == 'c'
				|| src[cnt] == 's' || src[cnt] == 'p')
			break ;
		cnt++;
	}
	return (cnt + 1);
}

int			search_dot(t_list *lst)
{
	char *src;

	src = lst->src;
	while (*src != lst->type)
	{
		if (*src == '.')
			return (1);
		src++;
	}
	return (0);
}

char		*ft_itoa_un(unsigned int n)
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
