#include "printf.h"

int ft_flag_width(t_base *all, char *s)
{
	all->len = ft_strlen(s);
	all->tot_len = (all->len <= all->flag.width) ? all->flag.width : all->len;
	if(!(all->con_str = malloc(sizeof(char *) * (all->tot_len + 1))))
		return (-1);
	return(1);
}

char *precision_s(t_base *all,char *s)
{
	char *tmp;
	if (all->flag.precision > 0 && all->flag.precision < (int)ft_strlen(s))
	{
		tmp = ft_strsub(s, 0, all->flag.precision);
		s = tmp;
	}
	else
		return(s);
	return(s);
}

char	*fill_zero(char *str, int size)
{
	int i;

	i = 0;
	str = malloc(sizeof(char *) * (size +1));
	while ( i < size)
	{
		str[i] = '0';
		i++;
	}
	str[i]= '\0';
	// printf("str %s\n", str);
	return (str);
}

char *precision_diouxX(t_base *all,char *s)
{
	char *tmp;

	int diff;

	if (all->flag.precision > 0 && all->flag.precision > (int)ft_strlen(s))
	{
		diff = all->flag.precision - ft_strlen(s);
		tmp = fill_zero(tmp, diff);
		tmp = ft_strjoin(tmp, s);
		if (all->flag.plus == 1)
		{
			tmp = ft_strjoin(all->flag.sign, tmp);
			all->flag.plus = 0;
		}
		s = tmp;
	}
	else
		return(s);
	return(s);
}

int 	type_dif(char c)
{
	return (c == 'd' || c == 'i' || c == 'f');
}

void	fill_width_space(t_base *all, char *str, int size)
{
	int i;

	i = 0;
	if (type_dif(all->type) && all->flag.precision == 0 && all->flag.zero == 1)
	{
			while( i < size)
			str[i++] = '0';
			if (!(ft_strcmp(all->flag.sign , "-\0")) || all->flag.plus == 1)
				str[0] = *all->flag.sign;
	}
	else
	{
		while(i < size)
			str[i++] = '.';
	}
}
