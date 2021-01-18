/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:40:20 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/19 01:40:21 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_diu(va_list ap, t_value *lst)
{
	int				n1;
	unsigned int	n2;
	char 			*s;

	n1 = 0;
	n2 = 0;
	if (lst->type == 'u')
	{
		n1 = va_arg(ap, unsigned int);
		s = ft_itoa_un(n1);
	}
	else
	{
		n2 = va_arg(ap, int);
		s = ft_itoa(n2);
	}
	if (n1 || n2 > 0)
		print_p(lst, s);
	else if (!n1 || !n2)
		print_z(lst);
	else
		print_n(lst, s);
	free_p(0, &s);
	lst->src += cnt_add(lst);
}

void		type_x(va_list ap, t_value *lst)
{
	unsigned long long	n;
	char			*s;

	n = va_arg(ap, unsigned long long);
	s = trans_d_h(lst, n);
	if (n)
		print_p(lst, s);
	else
		print_z(lst);
	free_p(0, &s);
	lst->src += cnt_add(lst);
}

/*void 	type_p(va_list ap, t_value *lst)
{
	char *s;

	s = trans_d_h(lst, va_arg(ap, unsigned long long));
	print_p(lst, s);
}*/