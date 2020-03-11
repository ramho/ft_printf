#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
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
**  convert.c
*/
int start_conversion(t_base *all);
int c_conversion(t_base *all);
int p_conversion(t_base *all);
int s_conversion(t_base *all);
int di_conversion(t_base *all);



/*
**  flags.c
*/
char *ft_flag_precision(t_base *all,char *s, int i);
int ft_flag_width(t_base *all, char *s);
void	fill_width_space(char *str, int size);

#endif
