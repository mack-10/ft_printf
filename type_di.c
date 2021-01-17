/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:49 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 20:16:54 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		pre_check(va_list ap, char *src)
{
	int		pre;

	pre = 0;
	while (*src != 'd' && *src != 'i')
	{
		if (*src == '.')
		{
			src++;
			if (*src >= '0' && *src <= '9')
				pre = *src - '0';
			else
				pre = va_arg(ap, int);
			break ;
		}
		src++;
	}
	return (pre);
}

static int		wid_over9(char *src)
{
	int		wid;
	char	*wid_s;

	wid_s = (char *)ft_calloc(1, 3);
	ft_strlcpy(wid_s, src, 3);
	wid = ft_atoi(wid_s);
	free_p(&wid_s);
	return (wid);
}

static int		wid_check(va_list ap, char *src)
{
	int		wid;

	wid = 0;
	while (*src != 'd' && *src != 'i')
	{
		if (*src == '.')
			break ;
		if (*src == '*')
		{
			wid = va_arg(ap, int);
			break ;
		}
		else if (*src > '0' && *src <= '9')
		{
			if (*(src + 1) >= '0' && *(src + 1) <= '9')
				wid = wid_over9(src);
			else
				wid = *src - '0';
			break ;
		}
		src++;
	}
	return (wid);
}

int				type_di(va_list ap, char *src)
{
	int wid;
	int pre;
	int num_int;

	wid = wid_check(ap, src);
	pre = pre_check(ap, src);
	num_int = va_arg(ap, int);
	if (num_int > 0)
		type_di_p(src, num_int, wid, pre);
	else if (!num_int)
		type_diu_z(src, wid, pre);
	else
		type_di_n(src, num_int, wid, pre);
	return (cnt_size(src));
}
