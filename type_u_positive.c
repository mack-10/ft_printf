/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u_positive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:31:00 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 21:20:02 by sujeon           ###   ########.fr       */
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

void			type_u_p(v_list *lst, unsigned int num_int)
{
	char	*num_str;

	num_str = ft_itoa_un(num_int);
	lst->size = ft_strlen(num_str);
	lst->ret += lst->size;
	if (lst->src[1] == '0' && lst->src[2] == '-')
		flag_minus(lst, num_str);
	else if (lst->src[1] == '-')
		flag_minus(lst, num_str);
	else if (lst->src[1] == '0')
		flag_zero(lst, num_str);
	else
		non_flag(lst, num_str);
	free_p(0, &num_str);
}
