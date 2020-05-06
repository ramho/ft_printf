#include "libft.h"

static long long	nlen(unsigned long long value, int base)
{
	int count = 0;

	while (value)
	{
		count++;
		value /= base;
	}
	return (count);
}

static	char 	*pick_size(char c)
{
	if (c == 'm')
		return ("0123456789abcdef");
	else if (c == 'M')
		return ("0123456789ABCDEF");
	return(NULL);
}

char 			*ft_u_itoa_base(unsigned long long value, int base, char c)
{
	char *str_base;
	char *dst;
	unsigned long long n;
	int len;
	int sign;

	n = value;
	sign = 0;
	str_base = pick_size(c);
	len = nlen(value, base);
	if (base < 2 || base > 16)
		return(NULL);
	if (value == 0)
		return (ft_strdup("0"));
	(base == 10 && value < 0) ? sign = 1 && len++: sign;
	value < 0 ? n = -n: n;
	if(!(dst = malloc(sizeof(char) * (len + 1))))
		return(NULL);
	sign ? dst[0] = '-': 0;
	dst[len] = '\0';
	while (n)
	{
		dst[--len] = str_base[n % base];
		n /= base;
	}
	return (dst);
}
