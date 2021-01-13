/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:49 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/12 23:23:49 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		pre_check(va_list ap, char *str)
{
	int		pre;

	pre = 0;
	while (*str != 'd')
	{
		if (*str == '.')
		{
			pre = va_arg(ap, int);
			break ;
		}
		str++;
	}
	return (pre);
}

static int		wid_check(va_list ap, char *str)
{
	int		wid;

	wid = 0;
	while (*str != 'd')
	{
		if (*str == '.')
			break ;
		if (*str == '*')
		{
			wid = va_arg(ap, int);
			break ;
		}
		str++;
	}
	return (wid);
}

void			type_d(va_list ap, char *str)
{
	int 	wid;
	int		pre;
	int 	num_int;
	char 	*num_str;

	wid = wid_check(ap, str);
	pre = pre_check(ap, str);
	num_int = va_arg(ap, int);

	if (num_int > 0)
		type_d_p(str, num_int, wid, pre);
	/*else if (!num_int)
		type_d_z();
	else
		type_d_n();*/
}
