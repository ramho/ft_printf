/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:19:19 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/09 14:25:43 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char 	is_type(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
			c == 'o'||	c == 'u' || c == 'x' || c == 'X' || c == 'f');
}

int ft_printf(const char* format, ...)
{
	t_base *all;
	int i;
	int j;
	char *str;
	int ret;
	int tot_ret;
	int tot_j;
	int tot = 0;

	i = 0;
	ret = 0;
	tot_ret = 0;
	tot_j = 0;
	all = malloc(sizeof(t_base));
	va_start(all->args, format);
	// printf("%s\n", format);
	while (format[i])// != '\0')
	{
		// printf("A --- i: %d fmt[i]: %c\n", i, format[i]);
		if(format[i] == '%')
		{
			// printf("C --- i: %d fmt[i]: %c\n", i, format[i]);
			j = 0;
			i++; // issues when %0p
			while (format[i] != '\0' && !(is_type(format[i]) || format[i] == '%'))
			{
				// printf("D --- i: %d fmt[i]: %c\n", i, format[i]);
				i++;
				// i = i + 2;
				j++;
			}
			// printf("E --- i: %d j: %d fmt[i]: %c\n", i, j, format[i]);
			tot_j += (j + 2);
			// printf("111\n");
			str = ft_strsub(format, i - j, j + 1);
			// printf("222\n");
			ret = light_flags(all, str);
			// printf("333\n");
			tot_ret += ret;
			free(str);
		}
		else
		{
			// printf("B --- i: %c fmt[i]: %c\n", i, format[i]);
			// printf("%c\n", format[i]);
			write(1, &format[i], 1);

		}
		i++;
	}
	tot = i - tot_j;
	tot += tot_ret;
	va_end(all->args);
	return (tot);
	}
