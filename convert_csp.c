/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:50 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/09 16:46:14 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		c_conversion(t_base *all)
{
	char	c;

	c = va_arg(all->args, int);
	all->len = 1;
	all->tot_len = (all->len <= all->flag.width) ? all->flag.width : all->len;
	if (!(all->con_str = malloc(sizeof(char *) * (all->tot_len + 1))))
		return (-1);
	fill_width_space(all->con_str, all->tot_len);
	all->con_str[all->tot_len] = '\0';
	if (all->flag.minus)
	{
		if (c == '\0')
		{
			write(1, "\0", 1);
			write(1, all->con_str, all->tot_len - 1);
			return (all->tot_len);
	}
	else
		all->con_str[0] = c;
	}
	else
		all->con_str[all->tot_len - 1] = c;
	ft_putstr(all->con_str);
	return(all->tot_len);
}

int		p_conversion(t_base *all)
{
	char	*tmp;
	long	p;
	int		i;

	p = va_arg(all->args, long);
	tmp = ft_strjoin("0x", ft_itoa_base(p, 16, 'm'));
	ft_flag_width(all, tmp);
	fill_width_space(all->con_str, all->tot_len);
	i = -1;
	if (all->flag.minus)
	{
		while (++i <= all->len - 1)
			all->con_str[i] = tmp[i];
		}
	else
	{
		i = all->tot_len;
		while (all->len + 1)
			all->con_str[i--] = tmp[all->len--];
	}
	all->con_str[all->tot_len + 1] = '\0';
	ft_putstr(all->con_str);
	return (all->tot_len);
}

int		s_conversion(t_base *all)
{
	char	*s;
	int		i;

	s = va_arg(all->args, char*);
	ft_flag_width(all, s);
	fill_width_space(all->con_str, all->tot_len);
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

int		start_conversion(t_base *all)
{
	int		ret;
	int		(*conversion[255])(t_base *all);

	//init_value_of_base(all);
	init_function(conversion);
	ret = conversion[all->type](all);
	return (-1);
}
