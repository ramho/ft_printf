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
	intmax_t d;
	int i;
	char *s;

	d = 0;
	if (all->flag.h > 0 || all->flag.l > 0)
		d = check_l_h(d, all);
	else
	{
			d = va_arg(all->args, int);
			all->di = d;
	}
	if ( d == 0 && all->flag.precision == 0)
		return(0);
	d < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	d < 0 ? d = -d : d;
	s = ft_itoa(d);
	s = precision_diouxX(all, s);
	if((all->flag.plus == 1 && all->flag.zero == 0 && type_dif(all->type))) // || ( all->di < 0))
		s = ft_strjoin(all->flag.sign, s);
	ft_flag_width(all, s);
	fill_width_space(all, all->con_str, all->tot_len);
	// if(all->di < 0)
	// 	all->con_str = ft_strjoin(all->flag.sign, all->con_str);
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
	if (all->flag.space == 1)
	{
		all->con_str = ft_strjoin(" \0", all->con_str);
		all->tot_len++;
	}
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
	s = ft_itoa(d);
	s = precision_diouxX(all, s);
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

int		o_conversion(t_base *all)
{
	long o;
	char *s;
	int i;

	o = va_arg(all->args, long);
	s = ft_itoa_base(o, 8, 'm');
	s = precision_diouxX(all, s);
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

int		x_conversion(t_base *all)
{
	long x;
	char *s;
	int i;

	x = va_arg(all->args, long);
	s = ft_itoa_base(x, 16, 'm');
	if(all->flag.hash == 1)
		s = ft_strjoin("0x", s);
	s = precision_diouxX(all, s);
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

int		X_conversion(t_base *all)
{
	long x;
	char *s;
	int i;

	x = va_arg(all->args, long);
	s = ft_itoa_base(x, 16, 'M');
	if(all->flag.hash == 1)
		s = ft_strjoin("0X", s);
	s = precision_diouxX(all, s);
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
