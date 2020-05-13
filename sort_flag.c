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
	flag.hash = 0;
	flag.zero = 0;
	flag.plus = 0;
	flag.minus = 0;
	flag.space = 0;
	flag.width = 0;
	flag.precision = -1;
	flag.l = 0;
	flag.h = 0;
	flag.L = 0;
	flag.sign = "+\0";
	return(flag);
}



int 	light_flags(t_base *all, char *str)
{
	int i;

	i = 0;
	all->malloc = 0;
	if(!((is_type(str[ft_strlen(str) - 1])) || str[ft_strlen(str) - 1] == '%') )
	{
		if ( is_flag_char(str[ft_strlen(str) - 1]) || ft_isdigit(str[ft_strlen(str) - 1]))
			return (1);
		write(1, &str[ft_strlen(str) - 1], 1);
		all->count += 1;
		return(1);
	}
	all->flag = init_flag(all->flag);
	while (str[i] && !(is_type(str[i])))
	{
			if(str[i] == '0')
			{
			 all->flag.zero = 1;
			 while(str[i] == '0' && !is_type(str[i + 1]))
			 		i++;
			}
			str[i] == '#' ? all->flag.hash = 1 : 0;
			str[i] == '+' ? all->flag.plus = 1 : 0;
			str[i] == '-' ? all->flag.minus = 1 : 0;
			str[i] == ' ' ? all->flag.space = 1 : 0;
			str[i] == 'L' ? all->flag.L = 1 : 0;
			if (ft_isdigit(str[i]) && all->flag.width == 0) // width
			{
				while (str[i] == '0')
					i++;
				all->flag.width = ft_atoi(str + i);
				i += ft_count_num(all->flag.width);
			}
			if (str[i] == '.') // precision
			{
				i++;
				while (str[i] == '0')
					i++;
				if (ft_isdigit(str[i]))
				{
						all->flag.precision = ft_atoi(str + i);
						i += ft_count_num(all->flag.precision);
				}
				else
				{
					all->flag.precision = 0;
					i--;
				}
			}
			if (str[i] == 'h')
			{
				all->flag.h = 1;
				if (str[i + 1] == 'h')
				{
					all->flag.h = 2;
					i++;
				}
			}
			if (str[i] == 'l')
			{
				all->flag.l = 1;
				if (str[i + 1] == 'l')
				{
					all->flag.l = 2;
					i++;
				}
			}
			if (str[i] == '%')
			{
				all->type = '%';
				return(modulo_conversion(all));
			}
		if(!is_type(str[i]))
			i++;
	}
	all->type = str[i];
	all->flag.minus == 1 ? all->flag.zero = 0 : 0;
	all->flag.plus == 1 ? all->flag.space = 0 : 0;
	all->flag.width == 0 ? all->flag.zero = 0: 0;
	return(start_conversion(all));
}
