/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:23:49 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 23:51:00 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_di(va_list ap, v_list *lst)
{
	int num_int;

	num_int = va_arg(ap, int);
	if (num_int > 0)
		type_di_p(lst, num_int);
	else if (!num_int)
		type_diu_z(lst);
	else
		type_di_n(lst, num_int);
	lst->src += cnt_size(lst->src);
}
