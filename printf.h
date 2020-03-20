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
	intmax_t di;

}                	 t_base;


/*
**  printf.c
*/
int ft_printf(const char* fmt, ...);
char 	is_type(char c);

/*
**  sort_flag.c
*/
int 	light_flags(t_base *all, char *str);
t_flag	init_flag(t_flag flag);

/*
**  tab_ptr.c
*/
void	init_function(int(*conversion[255])(t_base *all));
//void	init_value_of_base(t_base *all);

/*
**  convert_csp.c
*/
int c_conversion(t_base *all);
int p_conversion(t_base *all);
int s_conversion(t_base *all);
int		modulo_conversion();

/*
**  convert_diouxX.c
*/
int di_conversion(t_base *all);
int		u_conversion(t_base *all);
int		o_conversion(t_base *all);
int		x_conversion(t_base *all);
int		X_conversion(t_base *all);

/*
**  flags.c
*/
char *precision_s(t_base *all,char *s);
char *precision_diouxX(t_base *all,char *s);
int ft_flag_width(t_base *all, char *s);
void	fill_width_space(t_base *all, char *str, int size);
int 	type_dif(char c);

/*
**  start_conversion.c
*/
int start_conversion(t_base *all);
uintmax_t	check_l_h(uintmax_t d, t_base *all);


#endif
