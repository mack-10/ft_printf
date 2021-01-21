/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:45 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/18 03:29:33 by sujeon           ###   ########.fr       */
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
	if (lst->wid)
		print(lst, lst->wid - lst->size, ' ');
	else
		print(lst, lst->pre - lst->size, '0');
	if (search_dot(lst))
	{
		if (lst->pre >= lst->size)
			write(1, s, lst->size);
		else
			write(1, s, lst->pre);
	}
	else
		write(1, s, lst->size);
}

//static void		flag_zero(t_value *lst, char *src)


//static void		flag_minus(t_value *lst, char *src)

void			print_s(t_value *lst, char *s)
{
	lst->size = ft_strlen(s);
	if (search_dot(lst))
	{
		if (lst->pre >= lst-> size)
			lst->ret += lst->size;
		else
			lst->ret += lst->pre;
	}
	else
		lst->ret += lst->size;
	/*if (lst->src[1] == '-' || (lst->src[1] == '0' && lst->src[2] == '-'))
		flag_minus(lst, s);
	else if (lst->src[1] == '0')
		flag_zero(lst, s);*/
	non_flag(lst, s);
}
