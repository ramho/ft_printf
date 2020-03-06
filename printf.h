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
	int ll;
	int h;
	int hh;

}						t_flag;

typedef   struct  	s_base
{
 	t_flag 			flag;
	va_list			args;
	char			*fmt;
	char			**tab;
	int				len;
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

/*
**  convert.c
*/
int start_conversion(char *str, t_base *all);
int c_conversion(t_base *all);

/*
**  .c
*/

#endif
