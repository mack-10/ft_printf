/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:51:30 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/07 19:51:30 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int 	find_type(va_list ap, char *str)
{
	int 	idx;

	idx = 0;
	while(str[idx])
	{
		if (str[1] == '%')
			write(1, "%" , 1);
		else if (str[idx] == 'd' || str[idx] == 'i')
			return (type_di(ap, str));
		else if (str[idx] == 'u')
			;
		else if (str[idx] == 'X' || str[idx] == 'x')
			;
		else if (str[idx] == 'p')
			;
		else if (str[idx] == 'c')
			;
		else if (str[idx] == 's')
			;
		idx++;
	}
}

int    		ft_printf(const char *s, ...)
{
	va_list ap;
	char	*str;
	int		idx;

	idx = 0;
	str = (char *)s;
	va_start(ap, s);
	while (str[idx])
	{
		if (str[idx] == '%')
			idx += find_type(ap, str);
		else
		{
			write(1, &str[idx], 1);
			idx++;
		}
	}
	va_end(ap);
	return (idx);
}
