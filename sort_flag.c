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

int     no_conversion_char(char *str, t_base *all)
{
	if(is_flag_char(str[ft_strlen(str) - 1])
		|| ft_isdigit(str[ft_strlen(str) - 1]))
	return (1);
	write(1, &str[ft_strlen(str) - 1], 1);
	all->count += 1;
	return(1);
}

void		precision(int *i, t_base *all, char *str)
{
	*i += 1;
	while (str[*i] == '0')
	*i += 1;
	if (ft_isdigit(str[*i]))
	{
		all->flag.precision = ft_atoi(str + *i);
		*i += ft_count_num(all->flag.precision);
	}
	else
	{
		all->flag.precision = 0;
		*i -= 1;
	}
}

void width(int *i, t_base *all, char *str)
{
	while (str[*i] == '0')
	*i += 1;
	all->flag.width = ft_atoi(str + *i);
	*i += ft_count_num(all->flag.width);
}

void flag_l_h_L(int *i, t_base *all, char *str)
{
	str[*i] == 'L' ? all->flag.L = 1 : 0;
	if(str[*i] == 'h')
	{
		all->flag.h = 1;
		if (str[*i + 1] == 'h')
		{
			all->flag.h = 2;
			*i += 1;
		}
	}
	else if (str[*i] == 'l')
	{
		all->flag.l = 1;
		if(str[*i + 1] == 'l')
		{
			all->flag.l = 2;
			*i += 1;
		}
	}
}

void 	flag_zero(int *i, t_base *all, char *str)
{
	all->flag.zero = 1;
	while(str[*i] == '0' && !is_type(str[*i + 1]))
	*i += 1;
}

int 	light_flags_bis(int *i, char *str, t_base *all)
{
	while (str[*i] && !(is_type(str[*i])))
	{
		if(str[*i] == '0')
			flag_zero(i, all, str);
		str[*i] == '#' ? all->flag.hash = 1 : 0;
		str[*i] == '+' ? all->flag.plus = 1 : 0;
		str[*i] == '-' ? all->flag.minus = 1 : 0;
		str[*i] == ' ' ? all->flag.space = 1 : 0;
		if(ft_isdigit(str[*i]) && all->flag.width == 0) // width
		width(i, all, str);
		if (str[*i] == '.') // precision
		precision(i, all, str);
		if (str[*i] == 'h' || str[*i] == 'l' || str[*i] == 'L')
		flag_l_h_L(i, all, str);
		if (str[*i] == '%')
		{
			all->type = '%';
			return(modulo_conversion(all));
		}
		if(!is_type(str[*i]))
		*i += 1;
	}
	return(1);
}

int 	light_flags(t_base *all, char *str)
{
	int i;
	int ret;

	i = 0;
	all->malloc = 0;
	if(!((is_type(str[ft_strlen(str) - 1])) || str[ft_strlen(str) - 1] == '%') )
		return(no_conversion_char(str, all));
	all->flag = init_flag(all->flag);
	ret = light_flags_bis(&i, str, all);
	if(all->type == '%')
			return(ret);
	else if(ret == -1)
		return(-1);
	all->type = str[i];
	all->flag.minus == 1 ? all->flag.zero = 0 : 0;
	all->flag.plus == 1 ? all->flag.space = 0 : 0;
	all->flag.width == 0 ? all->flag.zero = 0: 0;
	return(start_conversion(all));
}
