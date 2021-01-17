/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:51:30 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 20:15:49 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	find_type(va_list ap, char *src)
{
	int idx;

	idx = -1;
	while (src[++idx])
	{
		if (src[1] == '%')
		{
			write(1, "%", 1);
			return (2);
		}
		else if (src[idx] == 'd' || src[idx] == 'i')
			return (type_di(ap, src));
		else if (src[idx] == 'u')
			return (type_u(ap, src));
		else if (src[idx] == 'X' || src[idx] == 'x')
			;
		else if (src[idx] == 'p')
			;
		else if (src[idx] == 'c')
			;
		else if (src[idx] == 's')
			;
	}
}

int			ft_printf(const char *s, ...)
{
	va_list ap;
	char	*src;
	int		ret;

	src = (char *)s;
	ret = ft_strlen(src);
	va_start(ap, s);
	while (*src)
	{
		if (*src == '%')
			src += find_type(ap, src);
		else
		{
			write(1, src, 1);
			src++;
		}
	}
	va_end(ap);
	return (ret);
}
