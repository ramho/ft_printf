#include "printf.h"

char *precision_s(t_base *all,char *s)
{
	char *tmp;
	if (all->flag.precision > 0 && all->flag.precision < (int)ft_strlen(s))
	{
		tmp = ft_strsub(s, 0, all->flag.precision);
		s = tmp;
		free(tmp);
	}
	else
		return(s);
	return(s);
}

char	*fill_zero(int size)
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char *) * (size +1));
	while ( i < size)
	{
		str[i] = '0';
		i++;
	}
	str[i]= '\0';
	return (str);
}

int 	type_dif(char c)
{
	return (c == 'd' || c == 'i' || c == 'f');
}
