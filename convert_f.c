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

long double   check_l_L(t_base *all, long double nb)
{
  if(all->flag.l == 1 || all->flag.L == 1)
    nb = va_arg(all->args, long double);
  else
    nb = va_arg(all->args, double);
  all->signed_nb = nb;
  return(nb);
}

char  *get_deci_part(long double decimal, t_base *all)
{
  unsigned long long tmp = 0;
  char * tmp_s;
  char *s;
  long double round_up;
  int p_test;
  int precision;

  precision = all->flag.precision >= 0 ? all->flag.precision : 6;
  p_test = precision;
  if (decimal == 0)
  {
    s = malloc(sizeof(char *) * p_test + 1);
    s = ft_memset(s, '0', p_test);
  }
  else
  {
    if(!(s=malloc(sizeof(char *) * (precision + 1))))
      return(NULL);
    s[precision] = '\0';
    round_up = 0.1;
    while (p_test != 0)
    {
      round_up = round_up / 10;
      p_test--;
    }
    decimal = decimal + round_up;
    while (precision > 0)
    {
      decimal = decimal * 10;
      tmp = tmp * 10 + decimal;
      decimal -= (signed int)decimal;
      precision--;
      decimal -= (int)decimal;
    }
    s = ft_itoa(tmp);
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
  char *s_entier;
  char *s_deci;

  nb = check_l_L(all, nb);
  nb < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	nb < 0 ? nb = -nb : nb;
  entier = nb;
  decimal = nb - entier;
  s = ft_itoa(entier);

  if ( all->flag.plus == 1)
  {
    s = ft_strjoin(all->flag.sign, s);
    all->flag.space = 0;
  }
  if (all->flag.precision == 0)
  {
    s_deci = NULL;
    if ( all->flag.hash == 1)
      s = ft_strjoin(s, ".");
  }
  else
    s_deci = get_deci_part(decimal, all);

  if (all->flag.space == 1)
    s = ft_strjoin(" ", s);
  if ( all->flag.precision != 0)
  {
    s = ft_strjoin(s, ".");
    s = ft_strjoin(s, s_deci);
  }

// printf("flag zero --> %d\n", all->flag.zero);
  ft_flag_width(all, s);
  fill_width_space(all, all->con_str, all->tot_len);
  // printf("con_str --> %s\n", all->con_str);
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
  return(ft_strlen(all->con_str));
}
