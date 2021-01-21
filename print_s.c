/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:45 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/22 05:36:12 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		print(t_value *lst, int n, char c)
{
	int		i;

	i = 0;
	if (n > 0)
		lst->ret += n;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

static void		non_flag(t_value *lst, char *s)
{
	if (!search_dot(lst))
	{
		if (lst->wid)
			print(lst, lst->wid - lst->size, ' ');
		write(1, s, lst->size);
	}
	else
	{
		if (lst->pre >= lst->size)
		{
			if (lst->wid)
				print(lst, lst->wid - lst->size, ' ');
			write(1, s, lst->size);
		}
		else
		{
			if (lst->wid)
				print(lst, lst->wid - lst->pre, ' ');
			write(1, s, lst->pre);
		}
	}
}

static void		flag_minus(t_value *lst, char *s)
{
	if (!search_dot(lst))
	{
		write(1, s, lst->size);
		if (lst->wid)
			print(lst, lst->wid - lst->size, ' ');
	}
	else
	{
		if (lst->pre >= lst->size)
		{
			write(1, s, lst->size);
			if (lst->wid)
				print(lst, lst->wid - lst->size, ' ');
		}
		else
		{
			write(1, s, lst->pre);
			if (lst->wid)
				print(lst, lst->wid - lst->pre, ' ');
		}
	}
}

void			print_s(t_value *lst, char *s)
{
	lst->size = ft_strlen(s);
	if (lst->pre < 0)
		lst->pre = lst->size;
	if (search_dot(lst))
	{
		if (lst->pre >= lst->size)
			lst->ret += lst->size;
		else
			lst->ret += lst->pre;
	}
	else
		lst->ret += lst->size;
	if (lst->src[1] == '-')
		flag_minus(lst, s);
	else
		non_flag(lst, s);
}
