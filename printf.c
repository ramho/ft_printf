/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:19:19 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/06 16:24:12 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char 	is_type(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
			c == 'o'||	c == 'u' || c == 'x' || c == 'X' || c == 'f' );
}

int ft_printf(const char* format, ...)
{
	t_base *all;
	int i;
	int j;
	int k;
	char *str;

	i = 0;
	k = 0;
	all=malloc(sizeof(t_base));
	all->fmt = (char *)format;
	all->len = ft_count_sym(all->fmt, '%');
	str = malloc(sizeof(char *) * (all->len + 1));
	va_start(all->args, format);
	while (all->fmt[i] != '\0')
	{
		//printf("next round\n");
		if(all->fmt[i] == '%' && all->fmt[i + 1] != '%')
		{
			j = 0;
			while ( all->fmt[i] && !is_type(all->fmt[i]))
			{
				i++;
				j++;
			}
			str = ft_strsub(all->fmt, i - j, j + 1);
			light_flags(all, str);
			free(str);
		}
		else
		{
			if (all->fmt[i] == '%')
				i++;
			write(1, &all->fmt[i], 1);
		}
		i++;
	}
	va_end(all->args);
	return (1);
	}
