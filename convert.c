/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:50 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/05 18:57:14 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int c_conversion(t_base all)
{
	int i;
	int width;
	char *con_str;
	char c;

	c = va_arg(all.args, int);
	width = all.flag->width;
	con_str = malloc(sizeof(char*) * (width + 1));
	while (no more str, find other conditions)
	{
	if (all.flag->minus)
	{
		con_str[0] = c;
		i = 1;
		while(i < width)
		{
			con_str[i] = '.';
			i++;
		}
		printf("%d\n", i);
	}
	else
	{
		i = 0;
		while ( i < width - 1)
		{
			con_str[i] = '.';
			i++;
		}
	}
	}
	con_str[width - 1] = c;
	con_str[width] = '\0';
	printf("%s\n", con_str);
	return(width);
}

int start_conversion(char *str, t_base all)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] == 'c')
			c_conversion(all);
		i++;
	}
	return (1);
}
