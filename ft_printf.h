/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:51:36 by sujeon            #+#    #+#             */
/*   Updated: 2021/01/17 21:16:49 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

# include <stdio.h>

int			ft_printf(const char *str, ...);
int			type_di(va_list ap, char *str);
void		type_di_p(char *str, int num_int, int wid, int pre);
void		type_diu_z(char *str, int wid, int pre);
void		type_di_n(char *str, int num_int, int wid, int pre);
int			type_u(va_list ap, char *src);
void		type_u_p(char *src, unsigned int num_int, int wid, int pre);
void		free_p(char **p);
int			search_dot(char *str);
int			cnt_size(char *str);
char		*ft_itoa_un(unsigned int n);

#endif
