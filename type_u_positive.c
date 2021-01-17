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
	int size;

	size = ft_strlen(src);
	if (wid > size)
	{
		if (pre > size)
			print(wid - pre, ' ');
		else
			print(wid - size, ' ');
	}
	if (pre > size)
		print(pre - size, '0');
	write(1, src, size);
}

static void		flag_zero(char *src, int wid, int pre)
{
	int size;

	size = ft_strlen(src);
	if (pre)
	{
		if (pre > size)
			print(wid - pre, ' ');
		else
			print(wid - size, ' ');
		print(pre - size, '0');
	}
	else
		print(wid - size, '0');
	write(1, src, size);
}

static void		flag_minus(char *src, int wid, int pre)
{
	int		size;

	size = ft_strlen(src);
	if (pre > size)
		print(pre - size, '0');
	write(1, src, size);
	if (wid > size)
	{
		if (pre > size)
			print(wid - pre, ' ');
		else
			print(wid - size, ' ');
	}
}

void			type_u_p(char *src, unsigned int num_int, int wid, int pre)
{
	char	*num_str;

	num_str = ft_itoa_un(num_int);
	if (src[1] == '0' && src[2] == '-')
		flag_minus(num_str, wid, pre);
	else if (src[1] == '-')
		flag_minus(num_str, wid, pre);
	else if (src[1] == '0')
		flag_zero(num_str, wid, pre);
	else
		non_flag(num_str, wid, pre);
	free_p(&num_str);
}
