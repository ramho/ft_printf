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

}									t_flag;

typedef   struct  s_base
{

	va_list          args;
  char       			*fmt;
	char 						**tab;
}                 t_base;


/*
**  printf.c
*/
int ft_printf(const char* fmt, ...);

/*
**  string.c
*/


#endif
