/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:52:39 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/02/27 18:17:56 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	find_size(int value, int base)
  {
  int	len;
  len = 0;
  while (value)
  {
  len++;
  value /= base;
  }
  return (len);
  }

  char		*ft_itoa_base(int value, int base)
  {
  char	*ret;
  char	*str_base;
  int		len;
  int		sign;
  long	n;

  n = value;
  sign = 0;
  str_base = "0123456789ABCDEF";
  len = find_size(value, base);
  if (base < 2 || base > 16)
  return (0);
  if (base == 10 && value == -2147483648)
  return ("-2147483648");
  if (value == 0)
  return ("0");
  (base == 10 && value < 0) ? sign = 1 && len++ : len;
  value < 0 ? n = -n : n;
  ret = (char *)malloc(sizeof(char) * (len + 1));
  ret[len] = '\0';
  sign ? (ret[0] = '-') : 0;
  while (n)
  {
  ret[--len] = str_base[n % base];
  n /= base;
  }
  return (ret);
  }*/

static int	nlen(int value, int base)
{
	int count = 0;

	while (value)
	{
		count++;
		value /= base;
	}
	return (count);
}

char 		*itoa_base(int value, int base)
{
	char *str_base;
	char *dst;
	long n;
	int len;
	int sign;

	n = value;
	sign = 0;
	str_base = "0123456789ABCDEF";
	len = nlen(value, base); 
	if (base < 2 || base > 16)
		return(NULL);
	if (value == 0)
		return ("0");
	(base == 10 && value < 0) ? sign = 1 && len++: sign;
	value < 0 ? n = -n: n;
	dst = malloc(sizeof(char) * (len + 1));
	sign ? dst[0] = '-': 0;
	dst[len] = '\0';
	while (n)
	{
		dst[--len] = str_base[n % base];
		n /= base;
	}
	return (dst);	
}
