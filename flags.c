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
	if(!(str = malloc(sizeof(char *) * (size +1))))
		return(NULL);
	while ( i < size)
	{
		str[i] = '0';
		i++;
	}
	str[i]= '\0';
	return (str);
}

void 	final_conversion(t_base *all, char *s, int i)
{
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
	all->count += all->tot_len;
	free(all->con_str);
}
