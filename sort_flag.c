/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:59 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/04 14:45:20 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_flag	*init_flag(t_flag *flag)
{
	flag->hash = 0;
	flag->zero = 0;
	flag->plus = 0;
	flag->minus = 0;
	flag->space = 0;
	flag->width = 0;
	flag->precision = 0;
	flag->l = 0;
	flag->ll = 0;
	flag->h = 0;
	flag->hh = 0;
	return(flag);
}

int 	light_flags(t_base all)
{
	int i;
	int j;

	all.flag->hash = 0;
	// if(!(flag = malloc(sizeof(t_flag)))
	// 	return (-1);
	init_flag(all.flag);
	j = 0;
	while (all.tab[j] != 0)
	{
		i = 0;
		while(all.tab[j][i] && !(is_type(all.tab[j][i])))
		{
			all.tab[j][i] == '#' ? all.flag->hash = 1 : 0;
			all.tab[j][i] == '0' ? all.flag->zero = 1 : 0;
			all.tab[j][i] == '+' ? all.flag->plus = 1 : 0;
			all.tab[j][i] == '-' ? all.flag->minus = 1 : 0;
			all.tab[j][i] == ' ' ? all.flag->space = 1 : 0;
//			all.tab[j][i] == '.precision' ? // a voir
			all.tab[j][i] == 'l' ? all.flag->l = 1 : 0;
//			all.tab[j][i] == "ll" ? flag->ll = 1 : 0; one char cannot == "ll"
			all.tab[j][i] == 'h' ? all.flag->h = 1 : 0;
//			all.tab[j][i] == "hh" ? flag->hh = 1 : 0;
			if (ft_isdigit(all.tab[j][i]))
			{
				all.flag->width = ft_atoi(&all.tab[j][i]);
				printf("width = %d\n", all.flag->width);
				while (ft_isdigit(all.tab[j][i]))
				{
					i++;
					all.flag->width = all.flag->width + 10 + ft_atoi(&all.tab[j][i]);
				}
			}
			//if()
			// printf("tab[%d]--> %s && tab[%d][%d]--> %c \n", j, all.tab[j],j, i, all.tab[j][i]);
			// printf("hash : %d, minus : %d, width : %d\n", all.flag->hash,all.flag->minus, all.flag->width);
			i++;
		}
		j++;
		// printf(" AFTER  tab[%d]--> %s && tab[%d][%d]--> %c \n", j,all.tab[j],j,i, all.tab[j][i]);
		 //printf(" AFTER  hash : %d, minus : %d, width : %d\n", all.flag->hash,all.flag->minus, all.flag->width);
	}
	return(1);
}
