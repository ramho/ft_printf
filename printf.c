/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:19:19 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/05 16:15:12 by rhoorntj         ###   ########.fr       */
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
	t_base all;
	int i;
	int j;
	int k;
	i = 0;
	k = 0;
	all.fmt = (char *)format;
	all.len = ft_count_sym(all.fmt, '%');
	all.tab = malloc(sizeof(char *) * (all.len + 1));
	va_start(all.args, format);
	while (all.fmt[i] != '\0')
	{
		if(all.fmt[i] == '%')
		{
			j = 0;
				while ( all.fmt[i] && !is_type(all.fmt[i]))
				{
					i++;
					j++;
				}
				all.tab[k] = ft_strsub(all.fmt, i - j, j + 1);
				light_flags(all ,all.tab[k]);
				k++;
		}
		i++;
	}
	all.tab[k] = NULL;
	//convert(all);
	va_end(all.args);
	return (1);
	}
