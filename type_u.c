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
	unsigned int	num_int;

	num_int = va_arg(ap, unsigned int);
	if (num_int)
		type_u_p(lst, num_int);
	else
		type_diu_z(lst);
	lst->src += cnt_size(lst->src);
}
