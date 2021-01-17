/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_di_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:39:37 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 20:17:41 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		print(int n, char c)
{
	int		i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

static void		non_flag(char *src, int wid, int pre)
{
	if (!pre && search_dot(src))
	{
		if (wid > 1)
			print(wid, ' ');
	}
	else
	{
		if (wid > 1)
		{
			if (pre > 1)
				print(wid - pre, ' ');
			else
				print(wid - 1, ' ');
		}
		if (pre > 1)
			print(pre - 1, '0');
		write(1, "0", 1);
	}
}

static void		flag_zero(int wid, int pre)
{
	if (pre)
	{
		if (pre > 1)
			print(wid - pre, ' ');
		else
			print(wid - 1, ' ');
		print(pre - 1, '0');
	}
	else
		print(wid - 1, '0');
	write(1, "0", 1);
}

static void		flag_minus(char *src, int wid, int pre)
{
	if (!pre && search_dot(src))
	{
		if (wid > 1)
			print(wid, ' ');
	}
	else
	{
		if (pre > 1)
			print(pre - 1, '0');
		write(1, "0", 1);
		if (wid > 1)
		{
			if (pre > 1)
				print(wid - pre, ' ');
			else
				print(wid - 1, ' ');
		}
	}
}

void			type_diu_z(char *src, int wid, int pre)
{
	if (src[1] == '0' && src[2] == '-')
		flag_minus(src, wid, pre);
	else if (src[1] == '-')
		flag_minus(src, wid, pre);
	else if (src[1] == '0')
		flag_zero(wid, pre);
	else
		non_flag(src, wid, pre);
}
