#include "printf.h"

string_handle(t_base all)
{
   str = va_arg(args, char *);
  ft_putstr(str);
}

// if (*all.fmt == '%' && *(all.fmt + 1) == 'd')
// {
// 	int i = va_arg(args, int);
// 	ft_putstr(ft_itoa(i + ' '));
// 	fmt++;
// }

// else if (*fmt == '%' && *(fmt + 1) == 'c')
// {
// 	// A 'char' variable will be promoted to 'int'
// 	// A character literal in C is already 'int' by itself
// 	char c = va_arg(args, int);
// 	ft_putstr(&c);
// 	fmt++;
// }
// else if (*fmt == '%' && *(fmt + 1) == 'f')
// {
// 		double d = va_arg(args, double);
// 		ft_putstr(ft_itoa(d + ' '));
// 		fmt++;
// }
// else if ( *fmt == '%' && *(fmt + 1) == 'p')
// {
// 	int p = va_arg(args, int);
// 	ft_putstr(ft_itoa_base(p, 16));
// 	fmt++;
// }