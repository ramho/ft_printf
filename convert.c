/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:50 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/06 16:24:09 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//int 	width_flag()

int c_conversion(t_base *all)
{
	int width;
	char *con_str;
	char c;
	int i;
	static int j = 0;
	//printf("\n%d", j);
	i = 0;
	c = va_arg(all->args, int);
	width = 1;
	//printf(" --------BEF--------width = %d et flag_witdh = %d\n", width, all->flag.width);
	if (all->flag.width > 0)
	{
		//printf("hello\n");
		width = all->flag.width;
	}
		//printf(" --------AFT--------width = %d et flag_witdh = %d\n", width, all->flag.width);
	//printf("--------AFT------ %d\n", width);
	if(!(con_str = malloc(sizeof(char *) * (width + 1))))
		return (-1);
	while(i < width)
	{
		con_str[i] = '.';
		i++;
	}
	con_str[width] = '\0';
	if (all->flag.minus)
		con_str[0] = c;
	else
		con_str[width - 1] = c;
	ft_putstr(con_str);
	j++;
	return(width);
}

int start_conversion(char *str, t_base *all)
{
	int i;
	//printf("enter strt conversion\n");
	i = 0;
	while (str[i])
	{
		if(str[i] == 'c')
			return(c_conversion(all));
		i++;
	}
	return (-1);
}
