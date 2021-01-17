/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 21:25:35 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/18 03:29:58 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cnt_size(unsigned int n)
{
	int cnt;

	cnt = 0;
	while (n)
	{
		n = n / 16;
		cnt++;
	}
	return (cnt);
}

static char	*trans_d_h(t_value *lst, unsigned int n)
{
	char	*s;
	int		size;

	size = cnt_size(n);
	s = (char *)ft_calloc(1, size);
	s[size] = 0;
	size--;
	while (n)
	{
		if ((n % 16) >= 10)
		{
			s[size] = (n % 16) + 55;
			if (lst->type == 'x')
				s[size] = ft_tolower(s[size]);
		}
		else
			s[size] = (n % 16) + '0';
		n = n / 16;
		size--;
	}
	return (s);
}

void		type_x(va_list ap, t_value *lst)
{
	unsigned int	n;
	char			*s;

	n = va_arg(ap, unsigned int);
	s = trans_d_h(lst, n);
	if (n)
		print_p(lst, s);
	else
		print_z(lst);
	free_p(0, &s);
	lst->src += cnt_add(lst);
}