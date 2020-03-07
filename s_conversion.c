#include "printf.h"

char *ft_flag_precision(t_base *all,char *s, int i)
{
	char *tmp;

	if (all->flag.precision > 0 && all->flag.precision < ft_strlen(s))
	{
		tmp = ft_strsub(s, i, all->flag.precision);
		s = tmp;
	}
	else
		return(s);
	return(s);
}

int ft_flag_width(t_base *all, char *s)
{
	all->slen = ft_strlen(s);
	all->tot_len = (all->slen <= all->flag.width) ? all->flag.width : all->slen;
	if(!(all->con_str = malloc(sizeof(char *) * (all->tot_len + 1))))
		return (-1);
	return(1);
}
int s_conversion(t_base *all)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(all->args, char*);
	ft_flag_width(all, s);
	while(i < all->tot_len)
		all->con_str[i++] = '.';
	i = -1;
	if (all->flag.minus)
	{
		while (++i <= all->slen - 1)
			all->con_str[i] = s[i];
		}
	else
	{
		i = all->tot_len;
		while (all->slen + 1)
			all->con_str[i--] = s[all->slen--];
	}
	all->con_str[all->tot_len + 1] = '\0';
	ft_putstr(all->con_str);
	return (all->tot_len);
}
