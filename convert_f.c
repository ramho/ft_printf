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
  char *tmp;
  char *s;
  signed int nb_deci;
  int precision;

  precision = all->flag.precision >= 0 ? all->flag.precision : 6;
  if(!(s=malloc(sizeof(char *) * (precision + 1))))
    return(NULL);
  s[precision] = '\0';
  while (precision--)
  {
    // printf("\n deci debut = %Lf\n", decimal);
    decimal = decimal * 10;
    nb_deci = decimal;
    printf("\nnb_deci = %d --- deci = %Lf\n", nb_deci, decimal);
    tmp = ft_itoa(nb_deci);
    printf("tmp %s\n", tmp);
    s = ft_strjoin_n_free(s, tmp, 2);
    ft_strdel(&tmp);
    decimal -= (signed int)decimal;
    // printf("\ns: %s deci %Lf tmp : %s\n", s, decimal, tmp);
  }
  return(tmp);
}

int		f_conversion(t_base *all)
{
  long double nb;
  int entier;
  long double decimal;
  int i;
  char *s_entier;
  char *s_deci;

  nb = check_l_L(all, nb);
  nb < 0 ? all->flag.sign = "-\0" : all->flag.sign;
	nb < 0 ? nb = -nb : nb;
  entier = nb;
  decimal = nb - entier;
  s_entier = ft_itoa(entier);
  s_deci = get_deci_part(decimal, all);
  // s = precision_f()
  // printf("nb = %Lf\n", nb);

  return(0);
}
