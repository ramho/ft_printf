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
	all->fmt = (char *)format;
	va_start(all->args, format);
	while (all->fmt[i] != '\0')
	{
		if(all->fmt[i] == '%')
		{
			j = 0;
			i++;
			while ( all->fmt[i] && !(is_type(all->fmt[i]) || all->fmt[i] == '%'))
			{
				i++;
				j++;
			}
			tot_j += (j + 2);
			str = ft_strsub(all->fmt, i - j, j + 1);
			ret = light_flags(all, str);
			tot_ret += ret;
			free(str);
		}
		else
			write(1, &all->fmt[i], 1);
		i++;
	}
	tot = i - tot_j;
	tot += tot_ret;
	va_end(all->args);
	return (tot);
	}
