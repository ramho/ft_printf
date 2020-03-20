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
	int		ret;
	int		(*conversion[255])(t_base *all);

	init_function(conversion);
	ret = conversion[all->type](all);
	return (ret);
}


uintmax_t  check_l_h(uintmax_t nb, t_base *all)
{
  if(all->flag.l == 1)
      nb = va_arg(all->args, long);
  if(all->flag.l == 2)
    nb = va_arg(all->args, long long);
  if(all->flag.h == 1)
    nb = va_arg(all->args, int);
  if(all->flag.h == 2)
    nb = va_arg(all->args, int);
  all->di = nb;
  return(nb);

}
