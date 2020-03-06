/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:59 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/06 14:44:39 by rhoorntj         ###   ########.fr       */
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

int 	light_flags(t_base *all, char *str)
{
	int i;

	all->flag->hash = 0; // redo
	i = 0;
	init_flag(all->flag);
	while (str[i] && !(is_type(str[i])))
	{
			str[i] == '#' ? all->flag->hash = 1 : 0;
			str[i] == '0' ? all->flag->zero = 1 : 0;
			str[i] == '+' ? all->flag->plus = 1 : 0;
			str[i] == '-' ? all->flag->minus = 1 : 0;
			str[i] == ' ' ? all->flag->space = 1 : 0;
//			str[i] == '.precision' ? // a voir
			str[i] == 'l' ? all->flag->l = 1 : 0;
//			str[i] == "ll" ? flag->ll = 1 : 0; one char cannot == "ll"
			str[i] == 'h' ? all->flag->h = 1 : 0;
//			str[i] == "hh" ? flag->hh = 1 : 0;
			if (ft_isdigit(str[i]))
			{
				all->flag->width = ft_atoi(&str[i]);
				i++;
				while (ft_isdigit(str[i]))
				{
					i++;
					all->flag->width = all->flag->width + 10 + ft_atoi(&str[i]);
				}
			}
			i++;
		}
	return(start_conversion(str, all));
}
