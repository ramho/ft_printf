/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:18:10 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/10 18:22:34 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

long double   check_l_L(t_base *all)
{
   long double nb;

  if(all->flag.l == 1 || all->flag.L == 1)
    nb = va_arg(all->args, long double);
  else
    nb = va_arg(all->args, double);
  all->signed_nb_f = nb;
  return(nb);
}
long double rounding( long double decimal, int precision)
{
  int count;
  long double round_up;
  long double deci_tmp;

  count = precision;
  round_up = 0.1;
  deci_tmp = decimal;
  while (count)
  {
    deci_tmp = deci_tmp * 10;
    deci_tmp -= (signed long long int)deci_tmp;
    round_up = round_up / 10;
    count--;
  }
  deci_tmp = deci_tmp * 10;
  count = deci_tmp;
  if(count >= 5)
    decimal += round_up;
  return (decimal);
}

char  *get_deci_part( long double decimal, t_base *all)
{
  char *tmp;
  char *s;
  int precision;
  long double matissa;
  int i;

  precision = all->flag.precision >= 0 ? all->flag.precision : 6;
  matissa = rounding( decimal, precision);
  if (decimal == 0)
  {
    s = malloc(sizeof(char *) * precision + 1);
    s = ft_memset(s, '0', precision);
  }
  else
  {
    i = 0;
    if(!(s=malloc(sizeof(char *) * (precision + 1))))
      return(NULL);
      s[precision] = '\0';
    while (precision > 0)
    {
      matissa = matissa * 10;
      tmp = ft_itoa((int)matissa);
      matissa -= (signed int)matissa;
      s[i] = tmp[0];
      precision--;
      i++;
    }
  }
  return(s);
}

int		f_conversion(t_base *all)
{
  long double nb;
  int entier;
  long double decimal;
  int i;
  char *s;
  char *s_deci;

  nb = check_l_L(all);
  nb < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	nb < 0 ? nb = -nb : nb;
  entier = nb;
  decimal = nb - entier;
  if( all->flag.precision == 0 && (decimal * 10) >= 5)
    entier += 1;
  s_deci = get_deci_part( decimal, all);
  s = ft_itoa(entier);
  if (all->flag.plus == 1 || all->signed_nb_f < 0)
  {
    s = ft_strjoin(all->flag.sign, s);
    all->flag.space = 0;
  }
  if (all->flag.space == 1)
    s = ft_strjoin(" ", s);
  if (all->flag.precision != 0)
  {
    s = ft_strjoin(s, ".");
    s = ft_strjoin(s, s_deci);
  }
  else
  {
    if ( all->flag.hash == 1)
      s = ft_strjoin(s, ".");
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
  all->count += ft_strlen(all->con_str);
  return(ft_strlen(all->con_str));
}
