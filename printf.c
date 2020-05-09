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

char is_flag_char(char c)
{
	return(c == 'h' || c == 'l' || c == 'L' || c == ' ' || c == '-' ||
			c == '+'||	c == '#' || c == '0' || c =='j');
}

int ft_printf(const char* format, ...)
{
	t_base *all;
	int i;
	int j;
	char *str;
	int ret;
	// int tot_ret;
	// int tot_j;

	i = 0;
	ret = 0;
	// tot_ret = 0;
	// tot_j = 0;
	all = malloc(sizeof(t_base));
	all->count = 0;
	va_start(all->args, format);
	// printf("len %d i = %d\n", (int)ft_strlen(format), i);
	while (format[i] != '\0') //<= (int)ft_strlen(format))// != '\0')
	{
		// printf("enter fmt [%s] - [%d]%c\n", format,i,format[i]);
		if(format[i] == '%' && format[i + 1])
		{
			j = 0;
			i++;
			while (!(ft_isalpha(format[i]) || format[i] == '%') && format[i] != '\0')
			{
				i++;
				j++;
			}
			while(is_flag_char(format[i]) && format[i + 1] != '\0')
			{
				i++;
				j++;
			}
				// tot_j += (j + 2);
				str = ft_strsub(format, i - j, j + 1);
				ret = light_flags(all, str);
		}
		else if(format[i] == '%' && !(format[i + 1]))
			return(all->count);
		else
			all->count += write(1, &format[i], 1);
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
