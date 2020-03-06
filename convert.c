/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:50 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/06 22:19:31 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//int 	width_flag()

int c_conversion(t_base *all)
{
	int width;
	char *con_str;
	char c;
	int i;

	i = 0;
	c = va_arg(all->args, int);
	width = 1;
	if (all->flag.width > 0)
		width = all->flag.width;
	if(!(con_str = malloc(sizeof(char *) * (width + 1))))
		return (-1);
	while(i < width)
		con_str[i++] = '.';
	con_str[width] = '\0';
	if (all->flag.minus)
		con_str[0] = c;
	else
		con_str[width - 1] = c;
	ft_putstr(con_str);
	return(width);
}

int p_conversion(t_base *all)
{
	char *con_str;
	char *tmp;
	int tot_len;
	long p;
	int i;
	int plen;


	i = 0;
	p = va_arg(all->args, long);
	tmp = ft_strjoin("0x", ft_itoa_base(p, 16, 'm'));
	plen = ft_strlen(tmp);
	tot_len = (plen <= all->flag.width) ? all->flag.width : plen;
	if(!(con_str = malloc(sizeof(char *) * (tot_len + 1))))
		return (-1);
	while(i < tot_len)
		con_str[i++] = '.';
	i = -1;
	if (all->flag.minus)
	{
		while (++i <= plen - 1)
			con_str[i] = tmp[i];
	else
	{
		i = tot_len;
		while (plen + 1)
			con_str[i--] = tmp[plen--];
	}
	con_str[tot_len + 1] = '\0';
	ft_putstr(con_str);
	return (tot_len);
}

int start_conversion(t_base *all)
{
	int ret;
	int	(*conversion[255])(t_base *all);

	init_function(conversion);
	ret = conversion[all->type](all);

	return (-1);
}
//void	init_function(int(*conversion[255])(t_base all))
