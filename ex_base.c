/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:40:33 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/19 21:32:30 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cnt_size(unsigned long long n)
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

char		*trans_d_h(t_value *lst, unsigned long long n)
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
			s[size] = (n % 16) + 87;
			if (lst->type == 'X')
				s[size] = ft_toupper(s[size]);
		}
		else
			s[size] = (n % 16) + '0';
		n = n / 16;
		size--;
	}
	return (s);
}
