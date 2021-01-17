/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_di_positive.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:45 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 23:53:06 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		print(v_list *lst, int n, char c)
{
	int		i;

	i = 0;
	lst->ret += n;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

static void		non_flag(v_list *lst, char *src)
{
	if (lst->wid > lst->size)
	{
		if (lst->pre > lst->size)
			print(lst, lst->wid - lst->pre, ' ');
		else
			print(lst, lst->wid - lst->size, ' ');
	}
	if (lst->pre > lst->size)
		print(lst, lst->pre - lst->size, '0');
	write(1, src, lst->size);
}

static void		flag_zero(v_list *lst, char *src)
{
	if (lst->pre)
	{
		if (lst->pre > lst->size)
			print(lst, lst->wid - lst->pre, ' ');
		else
			print(lst, lst->wid - lst->size, ' ');
		print(lst, lst->pre - lst->size, '0');
	}
	else
		print(lst, lst->wid - lst->size, '0');
	write(1, src, lst->size);
}

static void		flag_minus(v_list *lst, char *src)
{
	if (lst->pre > lst->size)
		print(lst, lst->pre - lst->size, '0');
	write(1, src, lst->size);
	if (lst->wid > lst->size)
	{
		if (lst->pre > lst->size)
			print(lst, lst->wid - lst->pre, ' ');
		else
			print(lst, lst->wid - lst->size, ' ');
	}
}

void			print_p(v_list *lst, char *s)
{
	lst->size = ft_strlen(s);
	lst->ret += lst->size;
	if (lst->src[1] == '0' && lst->src[2] == '-')
		flag_minus(lst, s);
	else if (lst->src[1] == '-')
		flag_minus(lst, s);
	else if (lst->src[1] == '0')
		flag_zero(lst, s);
	else
		non_flag(lst, s);
}
