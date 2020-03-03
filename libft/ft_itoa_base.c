/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:52:39 by rhoorntj          #+#    #+#             */
/*   Updated: 2020/03/03 18:32:44 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(long long value, int base)
{
	int count = 0;

	while (value)
	{
		count++;
		value /= base;
	}
	return (count);
}

static	char *pick_size(char c)
{
	if (c == 'm')
		return ("0123456789abdef");
	else if (c == 'M')
		return ("0123456789ABCDEF");
	return(NULL);
}

char 		*ft_itoa_base(long long value, int base, char c)
{
	char *str_base;
	char *dst;
	long long n;
	int len;
	int sign;

	n = value;
	sign = 0;
	str_base = pick_size(c);
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