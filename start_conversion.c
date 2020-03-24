/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:50 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/09 16:46:14 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		start_conversion(t_base *all)
{
	// printf("enter start conversion");
	int		ret;
	int		(*conversion[255])(t_base *all);

	init_function(conversion);
	ret = conversion[all->type](all);
	return (ret);
}
