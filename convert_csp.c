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
	// if( c == 0)
	// 	ft_bzero(&c,1);

	all->tot_len = (all->len <= all->flag.width) ? all->flag.width : all->len;
	if (!(all->con_str = malloc(sizeof(char *) * (all->tot_len + 1))))
		return (-1);
	fill_width_space(all, all->con_str, all->tot_len);
	all->con_str[all->tot_len] = '\0';
	// if(c == 0)
	// {
	// 	// printf("hello");
	// 	all->con_str = ft_strjoin(all->con_str, "^@");
		// return(1);
	// }
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
	tmp = ft_itoa_base(p, 16, 'm');
	if(p == 0 && all->flag.precision == 0)
	{
			ft_bzero(tmp, ft_strlen(tmp));
			all->flag.zero = 0;
	}
	if(all->flag.precision >= 0)
		tmp = precision_diouxX(all, tmp);
	else
	{
		if(all->flag.zero == 1)
		{
				tmp = ft_strjoin(fill_zero(all->flag.width - (ft_strlen(tmp) + 2)),tmp);
				all->flag.zero = 0;
		}
	}
	// printf("\n 111 zero %d\n", all->flag.zero);
	tmp = ft_strjoin("0x", tmp);
	ft_flag_width(all, tmp);
	fill_width_space(all, all->con_str, all->tot_len);
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
	if (s == NULL)
		s = "(null)";
	if(all->flag.precision == 0)
		s = "\0";
	s = precision_s(all, s);
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

int		modulo_conversion()
{
	write(1, "%", 1);
	return(1);
}
