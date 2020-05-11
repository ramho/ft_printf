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
	int count;

	i = 0;
	ret = 0;
	if (!(all = malloc(sizeof(t_base))))
		return(-1);
	all->count = 0;
	va_start(all->args, format);
	while (i < (int)ft_strlen(format))
	{
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
				if(!(str = ft_strsub(format, i - j, j + 1)))
					return(-1); // free all !
				ret = light_flags(all, str);
				free(str);
		}
		else if(format[i] == '%' && !(format[i + 1]))
			return(all->count);
		else
			all->count += write(1, &format[i], 1);
		i++;
	}
	count = all->count;
	va_end(all->args);
	free(all);
	return (count);
}
