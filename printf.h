#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "libft/libft.h"

typedef		struct 	s_flag
{
	int hash;
	int zero;
	int plus;
	int minus;
	int space;
	int width;
	int precision;
	int l;
	int h;
	int L;
	char* sign;

}						t_flag;

typedef   struct  	s_base
{
 	t_flag 			flag;
	va_list			args;
	char			*con_str;
	char			*fmt;

	char			**tab;
	int				len_fmt;
	int 			type;
	int len;
	int tot_len;
	intmax_t signed_nb;
	long double signed_nb_f;
	size_t		count;
	int malloc;
}                	 t_base;


/*
**  printf.c
*/
int 		ft_printf(const char* fmt, ...);
int			parse_format(const char *format, int *i, t_base *all);
char 		is_type(char c);
char 		is_flag_char(char c);

/*
**  sort_flag.c
*/
t_flag		init_flag(t_flag flag);
int    		no_conversion_char(char *str, t_base *all);
void			precision(int *i, t_base *all, char *str);
void 			width(int *i, t_base *all, char *str);
void 			flag_l_h_L(int *i, t_base *all, char *str);
int 			light_flags(t_base *all, char *str);
t_flag		init_flag(t_flag flag);

/*
**  start_conversion.c
*/
int 			start_conversion(t_base *all);
void			init_function(int(*conversion[255])(t_base *all));

/*
**  convert_csp.c
*/
int 			c_conversion(t_base *all);
int 			p_conversion(t_base *all);
int 			s_conversion(t_base *all);
int				modulo_conversion();
int 			modulo_conversion_bis(t_base *all);
char 			*p_conversion_bis(t_base *all, long int p, char *s);

/*
**  convert_diouxX.c
*/
int 			di_conversion(t_base *all);
int				u_conversion(t_base *all);
int				o_conversion(t_base *all);
int				x_conversion(t_base *all);
int				X_conversion(t_base *all);

/*
**  flags.c
*/
char 			*precision_s(t_base *all,char *s);
char			*fill_zero(int size);
void 	final_conversion(t_base *all, char *s, int i);

/*
**  di_flags.c
*/
intmax_t  check_l_ll_h_hh(intmax_t nb, t_base *all);
uintmax_t check_l_ll_h_hh_unsigned(uintmax_t nb, t_base *all);
char 			*precision_diouxX(t_base *all,char *s);
char 			*precision_diouxX_bis(t_base *all, char *s);
int 			ft_flag_width(t_base *all, char *s);
void			fill_width_space(t_base *all, char *str, int size);

/*
**  convert_f.c
*/
int		f_conversion(t_base *all);

#endif
