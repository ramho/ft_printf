/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:59 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/10 17:52:21 by rhoorntj         ###   ########.fr       */
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
	flag.h = 0;
	flag.sign = "+\0";
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
			if (ft_isdigit(str[i])) // width
			{
				while (str[i] == '0')
					i++;
				all->flag.width = ft_atoi(str + i);
				i += ft_count_num(all->flag.width);
			}
			if (str[i] == '.') // precision
			{
				i++;
				if (ft_isdigit(str[i]))
					all->flag.precision = ft_atoi(str + i);
					i += ft_count_num(all->flag.precision);
			}
			if (str[i] == 'h')
			{
				all->flag.h = 1;
				(str[i + 1] == 'h') ? all->flag.h = 2 && i++ : i;
			}
			if (str[i] == 'l')
			{
				all->flag.l = 1;
				(str[i + 1] == 'l') ? all->flag.l = 2 && i++ : i;
			}
			if (str[i] == '%')
				return(modulo_conversion(all));
		i++;
	}
	all->type = str[i];
	all->flag.minus == 1 ? all->flag.zero = 0 : 0;
	all->flag.plus == 1 ? all->flag.space = 0 : 0;
	return(start_conversion(all));
}
