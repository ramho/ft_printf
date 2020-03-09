#include "printf.h"

int ft_flag_width(t_base *all, char *s)
{
	all->len = ft_strlen(s);
	all->tot_len = (all->len <= all->flag.width) ? all->flag.width : all->len;
	if(!(all->con_str = malloc(sizeof(char *) * (all->tot_len + 1))))
		return (-1);
	return(1);
}

char *ft_flag_precision(t_base *all,char *s, int i)
{
	char *tmp;

	if (all->flag.precision > 0 && all->flag.precision < (int)ft_strlen(s))
	{
		tmp = ft_strsub(s, i, all->flag.precision);
		s = tmp;
	}
	else
		return(s);
	return(s);
}

void	fill_width_space(char *str, int size)
{
	int i;

	i = 0;
	while(i < size)
		str[i++] = '.';
}
