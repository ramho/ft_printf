/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:18:10 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/10 18:22:34 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

intmax_t  check_l_ll_h_hh(intmax_t nb, t_base *all)
{
  if (all->flag.h > 0 || all->flag.l > 0)
  {
    if (all->flag.l == 1)
      nb = va_arg(all->args, long int);
    else if (all->flag.l == 2)
      nb = va_arg(all->args, long long int);
    else if (all->flag.h == 1)
      nb = (short int)va_arg(all->args, int);
    else if (all->flag.h == 2)
      nb = (char)va_arg(all->args, int);
  }
  else
    nb = va_arg(all->args, int);
  all->signed_nb = nb;
  return(nb);
}

uintmax_t check_l_ll_h_hh_unsigned(uintmax_t nb,  t_base *all)
{
  if (all->flag.h > 0 || all->flag.l > 0)
  {
    if (all->flag.l == 1)
      nb = va_arg(all->args, unsigned long int);
    else if (all->flag.l == 2)
      nb = va_arg(all->args, unsigned long long int);
    else if (all->flag.h == 1)
      nb = (unsigned short int)va_arg(all->args, int);
    else if (all->flag.h == 2)
      nb = (unsigned char)va_arg(all->args,int);
  }
  else
    nb = va_arg(all->args, unsigned int);
  all->signed_nb = nb;
  return(nb);
}

char *precision_diouxX_bis(t_base *all, char *s)
{
  int diff;
  char *tmp;

  tmp = NULL;
  all->flag.zero = 0;
  diff = all->flag.precision - ft_strlen(s);
  if(!(tmp = fill_zero(diff)))
    return(NULL);
  if(!(tmp = ft_strjoin_n_free(tmp, s, 3)))
    return(NULL);
  if (all->flag.plus == 1 || all->signed_nb < 0)
  {
    if(!(tmp = ft_strjoin_n_free(all->flag.sign, tmp, 2)))
      return(NULL);
    all->flag.plus = 0;
    if( all->signed_nb < 0)
      all->signed_nb = - all->signed_nb ;
  }
  return(tmp);
}

char *precision_diouxX(t_base *all,char *s)
{
	if (all->flag.precision > 0 && all->flag.precision >= (int)ft_strlen(s))
  {
    if((s = precision_diouxX_bis(all, s))== NULL)
      return(NULL);
  }
  else if (all->flag.space == 1 && all->signed_nb >= 0
      && all->flag.zero == 0 && (all->type != 'd' || all->type != 'i'))
  {
    if(!(s = ft_strjoin_n_free(" ", s, 2)))
      return(NULL);
    all->flag.space = 0;
  }
  else
  {
    all->flag.precision >= 0 ? all->flag.zero = 0 : 0;
    all->flag.width <= (int)ft_strlen(s) ? all->flag.zero = 0 : 0;
		return(s);
  }
	return(s);
}

int ft_flag_width(t_base *all, char *s)
{
	all->len = ft_strlen(s);
	all->tot_len = (all->len <= all->flag.width) ? all->flag.width : all->len;
	if(!(all->con_str = malloc(sizeof(char *) * (all->tot_len + 1))))
		return (-1);
	return(1);
}

void	fill_width_space(t_base *all, char *str, int size)
{
	int i;

	i = 0;
	if(all->flag.zero == 1)
	{
			while( i < size)
			   str[i++] = '0';
			if(all->flag.plus == 1 || all->signed_nb < 0)
      {
        str[0] = *all->flag.sign;
        all->flag.plus = 0;
      }
      if(all->flag.hash == 1 && all->signed_nb != 0 && (all->type == 'x'
        || all->type == 'X'))
      {
        str[0] = '0';
        all->type == 'x' ? str[1] = 'x' : 0;
        all->type == 'X' ? str[1] = 'X' : 0;
      }
  }
	else
	{
		while(i < size)
			str[i++] = ' ';
	}
}
