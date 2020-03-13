/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_diouxX.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:18:10 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/10 18:22:34 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		di_conversion(t_base *all)
{
	int d;
	int i;
	char *s;

	d = va_arg(all->args, int);
	all->flag.minus ? all->flag.zero = 0 : 0;
	d < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	d < 0 ? d = -d : d;
	s = ft_itoa(d);
	s = precision_diouxX(all, s);
	if(all->flag.plus == 1 && all->flag.zero == 0 && type_dif(all->type))
		s = ft_strjoin(all->flag.sign, s);
	ft_flag_width(all, s);
	fill_width_space(all, all->con_str, all->tot_len);
	i = -1;
	if (all->flag.minus)
	{
		while (++i <= all->len - 1)
			all->con_str[i] = s[i];
	}
	else
	{
		i = all->tot_len;
		while (all->len + 1)
			all->con_str[i--] = s[all->len--];
	}
	all->con_str[all->tot_len + 1] = '\0';
	ft_putstr(all->con_str);
	return (all->tot_len);
}

int		u_conversion(t_base *all)
{
	unsigned int d;
	int i;
	char *s;

	all->flag.plus ? all->flag.plus = 0 : 0;
	all->flag.minus ? all->flag.zero = 0 : 0;
	d = va_arg(all->args, unsigned int);
	// printf("d = %u\n", d);
	s = ft_itoa(d);
	// printf("d = %s\n", s);
	s = precision_diouxX(all, s);
	// if(all->flag.plus == 1 && all->flag.zero == 0 && type_dif(all->type))
		// s = ft_strjoin(all->flag.sign, s);
	ft_flag_width(all, s);
	fill_width_space(all, all->con_str, all->tot_len);
	i = -1;
	// printf("str %s\n", all->con_str);
	if (all->flag.minus)
	{
		while (++i <= all->len - 1)
			all->con_str[i] = s[i];
	}
	else
	{
		i = all->tot_len;
		while (all->len + 1)
			all->con_str[i--] = s[all->len--];
	}
	all->con_str[all->tot_len + 1] = '\0';
	ft_putstr(all->con_str);
	return (all->tot_len);
}
