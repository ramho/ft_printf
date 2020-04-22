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
  long long tmp;
  char * tmp_s;
  char *s;
  // signed int nb_deci;
  int precision;
  printf("\n---\n");
  precision = all->flag.precision >= 0 ? all->flag.precision : 6;
  if(!(s=malloc(sizeof(char *) * (precision + 1))))
    return(NULL);
  s[precision] = '\0';
  printf(" precision = %d\n", precision);
  while (precision > 0)
  {
    // decimal = decimal * 10;
    // printf("get_deci_part --> decimal = %Lf\n", decimal);
    // tmp = (tmp * 10) + decimal;
    // printf("get_deci_part --> tmp %lld\n", tmp);
    // decimal -= (signed int)decimal;
    // precision--;
    decimal = decimal * 10;
    printf("decimal = %Lf\n", decimal);
    tmp_s = ft_itoa(decimal);
    printf("tmp %s\n", tmp_s);
    s = ft_strjoin_n_free(s, tmp_s, 2);
    printf("s = %s\n", s);
    ft_strdel(&tmp_s);
    decimal -= (signed int)decimal;
    precision--;
  }
  s = ft_itoa(tmp);
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
  // (nb < 1 && nb > 0) ? nb += 1 : 0;
  printf("f_conversion --> nb = %Lf\n", nb);
  nb < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	nb < 0 ? nb = -nb : nb;
  entier = nb;
  decimal = nb - entier;
  s_entier = ft_itoa(entier);
  printf("f_conversion decimal --> %Lf\n", decimal);
  // entier == 0 ? decimal += 1 : 0;
  s_deci = get_deci_part(decimal, all);
  // s = precision_f()
  // printf("nb = %Lf\n", nb);
  s = ft_strjoin(s_entier, ".");
  s = ft_strjoin(s, s_deci);
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
  // ft_putstr(all->con_str);
  printf("final str --> %s\n", all->con_str);
  return(0);
}
