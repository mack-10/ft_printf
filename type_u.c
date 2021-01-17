/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:13:47 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 21:17:31 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				type_u(va_list ap, v_list *lst)
{
	unsigned int	n;
	char 			*s;

	n = va_arg(ap, unsigned int);
	s = ft_itoa_un(n);
	if (n)
		print_p(lst, s);
	else
		print_z(lst);
	free_p(0, &s);
	lst->src += cnt_add(lst);
}
