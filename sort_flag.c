/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:59 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/06 16:23:58 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_flag	init_flag(t_flag flag)
{
	//printf("enter init flag\n");
	flag.hash = 0;
	flag.zero = 0;
	flag.plus = 0;
	flag.minus = 0;
	flag.space = 0;
	flag.width = 0;
	flag.precision = 0;
	flag.l = 0;
	flag.ll = 0;
	flag.h = 0;
	flag.hh = 0;
	//printf("width in init %d\n", flag.width);
	//printf("end of init flag\n");
	return(flag);
}

int 	light_flags(t_base *all, char *str)
{
	int i;

	//all->flag.hash = 0; // redo
	//printf("enter light flags\n");
	i = 0;
	all->flag = init_flag(all->flag);
	//printf("111\n");
	while (str[i] && !(is_type(str[i])))
	{
		//printf("%s\n", str);
			str[i] == '#' ? all->flag.hash = 1 : 0;
			str[i] == '0' ? all->flag.zero = 1 : 0;
			str[i] == '+' ? all->flag.plus = 1 : 0;
			str[i] == '-' ? all->flag.minus = 1 : 0;
			str[i] == ' ' ? all->flag.space = 1 : 0;
//			str[i] == '.precision' ? // a voir
			str[i] == 'l' ? all->flag.l = 1 : 0;
//			str[i] == "ll" ? flag.ll = 1 : 0; one char cannot == "ll"
			str[i] == 'h' ? all->flag.h = 1 : 0;
//			str[i] == "hh" ? flag.hh = 1 : 0;
			//printf("^^^^^^^^^^^^ %c && %d\n", str[i], all->flag.width);
			if (ft_isdigit(str[i]))
			{
				all->flag.width = ft_atoi(&str[i]);
				//printf(" in LIGHT flag width = %d\n", all->flag.width);
				i++;
				while (ft_isdigit(str[i]))
				{
					i++;
					//printf("flag width = %d\n", all->flag.width);
					all->flag.width = all->flag.width + 10 + ft_atoi(&str[i]);
				}
			}
			i++;
		}
	return(start_conversion(str, all));
}
