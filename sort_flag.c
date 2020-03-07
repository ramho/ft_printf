/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:59 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/06 22:03:15 by rhoorntj         ###   ########.fr       */
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

	i = 0;
	all->flag = init_flag(all->flag);
	while (str[i] && !(is_type(str[i])))
	{
			str[i] == '#' ? all->flag.hash = 1 : 0;
			str[i] == '0' ? all->flag.zero = 1 : 0;
			str[i] == '+' ? all->flag.plus = 1 : 0;
			str[i] == '-' ? all->flag.minus = 1 : 0;
			str[i] == ' ' ? all->flag.space = 1 : 0;
			if (ft_isdigit(str[i]))
			{
					all->flag.width = ft_atoi(str + i);
					i += ft_count_num(all->flag.width);
			}
			if (str[i] == '.')
			{
				i++;
				if (ft_isdigit(str[i]))
					all->flag.precision = ft_atoi(str + i);
					i += ft_count_num(all->flag.precision);
			}
				i++;
		}
	all->type = str[i];
	return(start_conversion(all));
}
