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
	intmax_t nb;
	int i;
	int j;
	char *s;

	nb = 0;
	nb = check_l_ll_h_hh(nb, all);
	nb < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	nb < 0 ? all->flag.space = 0 : 0;
	all->signed_nb = nb;
	nb < 0 ? nb = -nb : nb;
	s = ft_u_itoa_base(nb, 10, 'm');
	if ( nb == 0 && all->flag.precision == 0)
		ft_bzero(s, ft_strlen(s));
	s = precision_diouxX(all, s);
	// printf("zero = %d\n", all->flag.zero);
	if((all->flag.plus == 1 || all->signed_nb < 0) && all->flag.zero == 0)
	{
		s = ft_strjoin_n_free(all->flag.sign, s, 2);
		all->flag.plus = 0;
	}
	if (all->flag.space == 1 && all->flag.precision >= 0)
	{
		s = ft_strjoin(" \0", s);
		all->flag.space = 0;
	}
	if(!ft_flag_width(all, s))
		return(-1);

	fill_width_space(all, all->con_str, all->tot_len);
	printf("\n111 - s[%zu] = |%s| con_str[%zu] =|%s|\n",  ft_strlen(s), s, ft_strlen(all->con_str), all->con_str);
	i = -1;
	if (all->flag.minus)
	{
		if (all->flag.space == 1)
		{
			s = ft_strjoin(" \0", s);
			all->len +=1;
}
		while (++i <= all->len - 1)
		{
			all->con_str[i] = s[i];
			// printf("333 - s = |%c| con_str =|%c|\n", s[i], all->con_str[i]);
		}
	}
	else
	{
		i = all->tot_len;
		while (all->len + 1)
			all->con_str[i--] = s[all->len--];
		// printf("b- con_str = |%s| et s = |%s|\n", all->con_str, s);
	}
	printf("333 - s = |%s| con_str =|%s|\n", s, all->con_str);
	all->con_str[all->tot_len + 1] = '\0';
	if (all->flag.space == 1 && all->signed_nb >= 0)
	{
		// printf("con |%s| width %d precision %d \n", all->con_str, all->flag.width, all->flag.precision);
		// if(all->flag.precision > all->flag.width)// || (all->flag.width == 0  && all->flag.precision == -1))
		// 	all->con_str = ft_strjoin(" \0", all->con_str);
		// else if ( all->flag.width > all->flag.precision)
			all->con_str[0] = ' ';
	}
	ft_putstr(all->con_str);
	all->count += ft_strlen(all->con_str);
	return (ft_strlen(all->con_str));
}

int		o_conversion(t_base *all)
{

	uintmax_t nb;
	char *s;
	int i;
	int len;

	nb = 0;
	nb = check_l_ll_h_hh_unsigned(nb, all);
	s = ft_u_itoa_base(nb, 8, 'm');
	len = ft_strlen(s);
	if (nb == 0 && all->flag.precision == 0)
			all->flag.hash == 1 ? s = ft_strdup("0"):ft_bzero(s, ft_strlen(s));
	s = precision_diouxX(all, s);
	if(all->flag.hash == 1 &&  all->flag.precision <= len && nb >= 1) // pk pas ft_strlen direct ?
	{
		s = ft_strjoin_n_free("0", s, 2);
		all->flag.hash = 0;
	}
	ft_flag_width(all, s);
	// printf("\n s --> %s flag zero %d\n",s, all->flag.zero);
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
	all->count += all->tot_len;
	return (all->tot_len);
}


int		u_conversion(t_base *all)
{
	uintmax_t d;
	int i;
	char *s;

	all->flag.plus ? all->flag.plus = 0 : 0;
	all->flag.minus ? all->flag.zero = 0 : 0;
	all->flag.space ? all->flag.space = 0 : 0;
	d = 0;
	d = check_l_ll_h_hh_unsigned(d, all);
	s = ft_u_itoa_base(d,10, 'm');
	if(all->flag.precision == 0 && d == 0)
		all->flag.hash == 1 ? s = ft_strdup("0"):ft_bzero(s, ft_strlen(s));
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
	all->count += all->tot_len;
	return (all->tot_len);
}


int		x_conversion(t_base *all)
{
	uintmax_t nb;
	char *s;
	int i;

	nb = 0;
	nb = check_l_ll_h_hh_unsigned(nb, all);
	s = ft_u_itoa_base(nb, 16, 'm');
	if ( nb == 0 && all->flag.precision == 0)
	 	ft_bzero(s, ft_strlen(s));
	s = precision_diouxX(all, s);
	if(all->flag.hash == 1 && ((all->flag.precision >= 0 && nb > 0) || (all->flag.zero == 0 && nb > 0)))
	{
		s = ft_strjoin_n_free("0x", s, 2);
		all->flag.hash = 0;
	}
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
	all->count += all->tot_len;
	return (all->tot_len);
}

int		X_conversion(t_base *all)
{
		uintmax_t nb;
		char *s;
		int i;

		nb = 0;
		nb = check_l_ll_h_hh_unsigned(nb, all);
		s = ft_u_itoa_base(nb, 16, 'M');
		if ( nb == 0 && all->flag.precision == 0)
			ft_bzero(s, ft_strlen(s));
		s = precision_diouxX(all, s);
		if(all->flag.hash == 1 && ((all->flag.precision >= 0 && nb > 0) || (all->flag.zero == 0 && nb > 0)))
		{
			s = ft_strjoin_n_free("0X", s, 2);
			all->flag.hash = 0;
		}
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
		all->count += all->tot_len;
		return (all->tot_len);
}
