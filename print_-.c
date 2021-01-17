/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_di_negative.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:39:45 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 23:52:57 by sujeon           ###   ########.fr       */
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
			print(lst, lst->wid - (lst->pre + 1), ' ');
		else
			print(lst, lst->wid - lst->size, ' ');
	}
	if (lst->pre > lst->size)
	{
		write(1, "-", 1);
		print(lst, lst->pre - (lst->size - 1), '0');
		write(1, src + 1, lst->size - 1);
	}
	else
		write(1, src, lst->size);
}

static void		flag_zero(v_list *lst, char *src)
{
	if (lst->pre)
	{
		if (lst->pre > lst->size)
			print(lst, lst->wid - (lst->pre + 1), ' ');
		else
			print(lst, lst->wid - lst->size, ' ');
		write(1, "-", 1);
		print(lst, lst->pre - (lst->size - 1), '0');
	}
	else
	{
		write(1, "-", 1);
		print(lst, lst->wid - lst->size, '0');
	}
	write(1, src + 1, lst->size - 1);
}

static void		flag_minus(v_list *lst, char *src)
{
	if (lst->pre > lst->size)
	{
		write(1, "-", 1);
		print(lst, lst->pre - (lst->size - 1), '0');
		write(1, src + 1, lst->size - 1);
	}
	else
		write(1, src, lst->size);
	if (lst->wid > lst->size)
	{
		if (lst->pre > lst->size)
			print(lst, lst->wid - (lst->pre + 1), ' ');
		else
			print(lst, lst->wid - lst->size, ' ');
	}
}

void			print_n(v_list *lst, char *s)
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
