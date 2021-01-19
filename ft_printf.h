/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:51:36 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/18 03:33:06 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

# include <stdio.h>

typedef struct	s_value
{
	int		ret;
	int		wid;
	int		pre;
	int		size;
	char	*src;
	char	type;
}				t_value;

int				ft_printf(const char *str, ...);
void			type_di(va_list ap, t_value *lst);
void			type_u(va_list ap, t_value *lst);
void			type_x(va_list ap, t_value *lst);
void 			type_p(va_list ap, t_value *lst);
void 			type_cs(va_list ap, t_value *lst);
void			print_p(t_value *lst, char *s);
void			print_c(t_value *lst, char c);
void			print_n(t_value *lst, char *s);

void			free_p(t_value **p1, char **p2);
int				search_dot(t_value *lst);
int				cnt_add(t_value *lst);
char			*ft_itoa_un(unsigned int n);
char			*trans_d_h(t_value *lst, unsigned long long n);

#endif
