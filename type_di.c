/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:49 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/18 03:29:46 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_di(va_list ap, t_value *lst)
{
	int		n;
	char	*s;

	n = va_arg(ap, int);
	s = ft_itoa(n);
	if (n > 0)
		print_p(lst, s);
	else if (!n)
		print_z(lst);
	else
		print_n(lst, s);
	free_p(0, &s);
	lst->src += cnt_add(lst);
}
