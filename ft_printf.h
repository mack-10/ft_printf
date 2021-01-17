/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:51:36 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 23:52:42 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

# include <stdio.h>

typedef struct	values
{
	int		ret;
	int		wid;
	int		pre;
	int		size;
	char	*src;
	char 	type;
}				v_list;

int			ft_printf(const char *str, ...);
void		type_di(va_list ap, v_list *lst);
int			type_u(va_list ap, v_list *lst);
void		type_x(va_list ap, v_list *lst);
void		print_p(v_list *lst, char *s);
void		print_z(v_list *lst);
void		print_n(v_list *lst, char *s);

void		free_p(v_list **p1, char **p2);
int			search_dot(v_list *lst);
int			cnt_add(v_list *lst);
char		*ft_itoa_un(unsigned int n);

#endif
