/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 01:28:10 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/19 21:28:54 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	wid_pre_over9(t_value *lst, char *src, int sign)
{
	char	*s;

	s = (char *)ft_calloc(1, 3);
	ft_strlcpy(s, src, 3);
	if (!sign)
		lst->wid = ft_atoi(s);
	else
		lst->pre = ft_atoi(s);
	free_p(0, &s);
}

static void	pre_check(va_list ap, t_value *lst)
{
	char	*src;

	src = lst->src + 1;
	lst->pre = 0;
	while (*src != lst->type)
	{
		if (*src == '.')
		{
			if (src[1] == '*')
				lst->pre = va_arg(ap, int);
			else if (src[1] > '0' && src[1] <= '9')
			{
				if (src[2] >= '0' && src[2] <= '9')
					wid_pre_over9(lst, src, 1);
				else
					lst->pre = src[1] - '0';
			}
			break ;
		}
		src++;
	}
}

static void	wid_check(va_list ap, t_value *lst)
{
	char *src;

	src = lst->src;
	lst->wid = 0;
	while (*src != lst->type)
	{
		if (*src == '*' || (*src > '0' && *src <= '9'))
		{
			if (*src == '*')
				lst->wid = va_arg(ap, int);
			else
			{
				if (src[1] >= '0' && src[1] <= '9')
					wid_pre_over9(lst, src, 0);
				else
					lst->wid = *src - '0';
			}
			break ;
		}
		src++;
	}
}

static void	find_type(va_list ap, t_value *lst)
{
	lst->type = lst->src[cnt_add(lst) - 1];
	wid_check(ap, lst);
	pre_check(ap, lst);
	if (lst->type == '%')
		print_c(lst, '%');
	else if (lst->type == 'd' || lst->type == 'i')
		type_di(ap, lst);
	else if (lst->type == 'u')
		type_u(ap, lst);
	else if (lst->type == 'X' || lst->type == 'x')
		type_x(ap, lst);
	else if (lst->type == 'c')
		print_c(lst, va_arg(ap, int));
	else if (lst->type == 's')
		type_s(ap, lst);
	else if (lst->type == 'p')
		type_p(ap, lst);
	lst->src += cnt_add(lst);
}

int			ft_printf(const char *s, ...)
{
	va_list ap;
	t_value	*lst;
	int		ret;

	lst = (t_value *)ft_calloc(1, sizeof(t_value));
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
