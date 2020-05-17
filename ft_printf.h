/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:50 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/09 16:46:14 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "libft/libft.h"

typedef struct		s_flag
{
	int				hash;
	int				zero;
	int				plus;
	int				minus;
	int				space;
	int				width;
	int				precision;
	int				l;
	int				h;
	int				upperl;
	char			*sign;
}					t_flag;

typedef	struct		s_base
{
	t_flag			flag;
	va_list			args;
	char			*con_str;
	char			**tab;
	int				len_fmt;
	int				type;
	int				len;
	int				tot_len;
	intmax_t		signed_nb;
	long double		signed_nb_f;
	size_t			count;
	int				malloc;
	int				one;
	long double		round_up;
	long double		deci_tmp;
}					t_base;

/*
**  ft_printf.c
*/
int					ft_printf(const char *fmt, ...);
int					parse_format(const char *format, int *i, t_base *all);
char				is_type(char c);
char				is_flag_char(char c);

/*
**  parse_flag.c
*/
t_flag				init_flag(t_flag flag);
int					no_conversion_char(char *str, t_base *all);
int					light_flags(t_base *all, char *str);
int					light_flags_bis(int *i, char *str, t_base *all);

/*
**  parse_flag_bis.c
*/
void				flag_zero(int *i, t_base *all, char *str);
void				width(int *i, t_base *all, char *str);
void				precision(int *i, t_base *all, char *str);
void				flag_l_h(int *i, t_base *all, char *str);

/*
**  start_conversion.c
*/
int					start_conversion(t_base *all);
void				init_function(int(*conversion[255])(t_base *all));

/*
**  convert_csp.c
*/
int					c_conversion(t_base *all);
int					p_conversion(t_base *all);
char				*p_conversion_bis(t_base *all, long int p, char *s);
int					s_conversion(t_base *all);

/*
**  convert_di.c
*/
int					di_conversion(t_base *all);
char				*di_conversion_thrice(t_base *all, char *s);
char				*di_conversion_twice(intmax_t nb, t_base *all, char *s);

/*
**  convert_oux.c
*/
int					u_conversion(t_base *all);
int					o_conversion(t_base *all);
char				*o_conversion_bis(uintmax_t nb, t_base *all, char *s);
int					x_conversion(t_base *all);
int					xupper_conversion(t_base *all);

/*
**  convert_modulo.c
*/
int					modulo_conversion(t_base *all);
int					modulo_conversion_bis(t_base *all);

/*
**  precision_flag.c
*/
char				*precision_s(t_base *all, char *s);
char				*precision_dioux(t_base *all, char *s);
char				*precision_dioux_bis(t_base *all, char *s);
char				*fill_zero(int size);

/*
**  width_n_final_flag.c
*/
int					ft_flag_width(t_base *all, char *s);
void				fill_width_space(t_base *all, char *str, int size);
void				final_conversion(t_base *all, char *s);

/*
**  length_modifiers_flag.c
*/
long double			check_l_lupper(t_base *all);
intmax_t			check_l_ll_h_hh(intmax_t nb, t_base *all);
uintmax_t			check_l_ll_h_hh_unsigned(uintmax_t nb, t_base *all);

/*
**  convert_f.c
*/
int					f_conversion(t_base *all);
void				round_float(t_base *all, long double *nb);
void				round_up(long double *nb, int decimal);
char				*get_deci_part(long double nb, t_base *all, int i);
int					convert_f_bis(t_base *all, char *s, char *s_deci);
#endif
