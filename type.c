/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:40:20 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/19 21:30:17 by sujeon           ###   ########.fr       */
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
		print_nbr(lst, s);
	else if (!n)
		print_c(lst, '0');
	else
		print_sign(lst, s);
	free_p(0, &s);
}

void	type_u(va_list ap, t_value *lst)
{
	unsigned int	n;
	char			*s;

	n = va_arg(ap, unsigned int);
	s = ft_itoa_un(n);
	if (n)
		print_nbr(lst, s);
	else if (!n)
		print_c(lst, '0');
	free_p(0, &s);
}

void	type_x(va_list ap, t_value *lst)
{
	unsigned long long	n;
	char				*s;

	n = va_arg(ap, unsigned int);
	s = trans_d_h(lst, n);
	if (n)
		print_nbr(lst, s);
	else
		print_c(lst, '0');
	free_p(0, &s);
}

void	type_p(va_list ap, t_value *lst)
{
	unsigned long long n;
	char	*s1;
	char	*s2;

	n = va_arg(ap, unsigned long long);
	if (!n)
		s1 = ft_strdup("0");
	else
		s1 = trans_d_h(lst, n);
	s2 = ft_strjoin("0x", s1);
	print_sign(lst, s2);
	free_p(0, &s1);
	free_p(0, &s2);
}

void	type_s(va_list ap, t_value *lst)
{
	char *s;

	s  = va_arg(ap, char *);
	if (!s)
	{
		s = ft_strdup("(null)");
		print_nbr(lst, s);
		free_p(0, &s);
	}
	else
		print_s(lst, s);
}
