/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_d_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:39:37 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/14 01:39:37 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void 	print(int n, char c)
{
	int		i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

static void 	non_flag(char str,int wid, int pre)
{
	if (pre)
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
	else if (!pre && ft_strchr(str, '.'))
	{
		if (wid > 1)
			print(wid, ' ');
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

static void		flag_minus(int wid, int pre)
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

void			type_d_z(char *str, int wid, int pre)
{
	if (str[1] == '0' && str[2] == '-')
		flag_minus(wid, pre);
	else if (str[1] == '-')
		flag_minus(wid, pre);
	else if (str[1] == '0')
		flag_zero(wid, pre);
	else
		non_flag(str, wid, pre);
}
