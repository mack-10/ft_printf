/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.lst->type                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:51:30 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 23:51:28 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		pre_check(va_list ap, v_list *lst)
{
	char	*src;

	src = lst->src;
	while (*src != lst->type)
	{
		if (*src == '.')
		{
			src++;
			if (*src >= '0' && *src <= '9')
				lst->pre = *src - '0';
			else
				lst->pre = va_arg(ap, int);
			break ;
		}
		src++;
	}
}

static void		wid_over9(v_list *lst)
{
	char	*wid_s;

	wid_s = (char *)ft_calloc(1, 3);
	ft_strlcpy(wid_s, lst->src, 3);
	lst->wid = ft_atoi(wid_s);
	free_p(0, &wid_s);
}

static void		wid_check(va_list ap, v_list *lst)
{
	char *src;

	src = lst->src;
	while (*src != lst->type)
	{
		if (*src == '.')
			break ;
		if (*src == '*')
		{
			lst->wid = va_arg(ap, int);
			break ;
		}
		else if (*src > '0' && *src <= '9')
		{
			if (src[1] >= '0' && src[1] <= '9')
				wid_over9(lst);
			else
				lst->wid = *src - '0';
			break ;
		}
		src++;
	}
}

static int	find_type(va_list ap, v_list *lst)
{
	wid_check(ap, lst);
	pre_check(ap, lst);
	lst->type = lst->src[cnt_size(lst->src) - 1];
	if (lst->type == '%')
	{
		write(1, "%", 1);
		return (2);
	}
	else if (lst->type == 'd' || lst->type == 'i')
		type_di(ap, lst);
	else if (lst->type == 'u')
		type_u(ap, lst);
	else if (lst->type == 'X' || lst->type == 'x')
		;
	else if (lst->type == 'p')
		;
	else if (lst->type == 'c')
		;
	else if (lst->type == 's')
		;
}

int			ft_printf(const char *s, ...)
{
	va_list ap;
	v_list	*lst;
	int		ret;

	lst = (v_list *)ft_calloc(1, sizeof(v_list));
	lst->src = (char *)s;
	va_start(ap, s);
	while (*lst->src)
	{
		if (*lst->src == '%')
			find_type(ap, lst);
		else
		{
			write(1, lst->src, 1);
			lst->ret++;
			lst->src++;
		}
	}
	ret = lst->ret;
	free_p(&lst, 0);
	va_end(ap);
	return (ret);
}
