/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:19:19 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/02/27 18:28:21 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

// void	ft_printf(char *format, ...)
// {
// 	va_list args;
//
// 	va_start(args, format);
// 	ft_putstr(format);
// 	//format = va_arg (args, char *);
// 	va_end(args);
// }
//
// int main()
// {
// 	ft_printf("Salut");
// }

void simple_printf(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	while (*fmt != '\0')
	{
		if (*fmt == '%' && *(fmt + 1) == 'd') {
			int i = va_arg(args, int);
			ft_putstr(itoa(i + ' '));
			fmt++;
		}
		else if (*fmt == '%' && *(fmt + 1) == 'c')
		{
			// A 'char' variable will be promoted to 'int'
			// A character literal in C is already 'int' by itself
			char c = va_arg(args, int);
			ft_putstr(&c);
			fmt++;
		}
		else if (*fmt == '%' && *(fmt + 1) == 'f')
		{
				double d = va_arg(args, double);
				ft_putstr(itoa(d + ' '));
				fmt++;
		}
		else if ( *fmt == '%' && *(fmt + 1) == 'p')
		{
			int p = va_arg(args, int);
			ft_putstr(ft_itoa_base(p, 16));
			fmt++;
		}
		else
			write(1,fmt,1);
		fmt++;
	}

		va_end(args);
	}

int main(void)
{
	char *str = "caca";
    simple_printf("salut les %p\n", str);
	printf("psalut les %p\n", str);
    simple_printf("salut les %c\n", str[0]);
	printf("psalut les %c\n", str[0]);
    simple_printf("salut les %c\n", str[3]);
    printf("psalut les %c\n", str[3]);
	simple_printf("salut les %p\n", &str);
    printf("psalut les %p\n", &str);
	simple_printf("salut les %p\n", &str[0]);
    printf("psalut les %p\n", &str[0]);
	simple_printf("salut les %p\n", &str[3]);
    printf("psalut les %p\n", &str[3]);
}
