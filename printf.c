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

	i = 0;
	ret = 0;
	tot_ret = 0;
	tot_j = 0;
	all = malloc(sizeof(t_base));
	all->count = 0;
	va_start(all->args, format);
	while (format[i] != '\0')
	{
		// printf("%c\n", format[i]);
		if(format[i] == '%' && format[i + 1])
		{
			// printf("1\n");
			j = 0;
			i++;
			while (!(ft_isalpha(format[i]) || format[i] == '%') && format[i] != '\0')
			{
				// printf("2\n");
				i++;
				j++;
			}
			while(format[i] == 'l' || format[i] == 'L' || format[i] == 'h')
			{
				i++;
				j++;
			}
			if (is_type(format[i]) || format[i] == '%')
			{
				tot_j += (j + 2);
				str = ft_strsub(format, i - j, j + 1);
				ret = light_flags(all, str);
			}
			else
				all->count += 0;
		}
		else if(format[i] == '%' && !(format[i + 1]))
		{
			return(0);
		}
		else
		{
			// printf("else\n");
			all->count += write(1, &format[i], 1);
		}
		// printf(" [%d] %c\n", i,format[i]);
		i++;
	}
	va_end(all->args);
	return (all->count);
}



// int ft_printf(const char* format, ...)
// {
// 	t_base *all;
// 	int i;
// 	int j;
// 	char *str;
// 	int ret;
// 	int tot_ret;
// 	int tot_j;
// 	int tot = 0;
//
// 	i = 0;
// 	ret = 0;
// 	tot_ret = 0;
// 	tot_j = 0;
// 	all = malloc(sizeof(t_base));
// 	va_start(all->args, format);
// 	// printf("FORMAT --> %s\n", format);
// 	while (format[i])
// 	{
// 		if(format[i] == '%' && format[i + 1])
// 		{
//
// 			j = 0;
// 			i++;
// 			while (format[i] != '\0' && !(is_type(format[i]) || format[i] == '%'))
// 			{
// 				i++;
// 				j++;
// 			}
// 			tot_j += (j + 2);
// 			str = ft_strsub(format, i - j, j + 1);
// 			ret = light_flags(all, str);
//
// 			tot_ret += ret;
// 			free(str);
// 		}
// 		else if(format[i] == '%' && !(format[i + 1]))
// 		{
// 			// printf("only one perc\n");
// 			return(0);
// 		}
// 		else
// 		{
// 			// printf("bip\n");
// 			write(1, &format[i], 1);
// 		}
// 		i++;
// 	}
// 	tot = i - tot_j;
// 	tot += tot_ret;
// 	va_end(all->args);
// 	return (tot);
// 	}
