#include "printf.h"

void	init_flag(t_flag flag)
{
	flag.hash = 0;
	flag.zero = 0;
	flag.plus = 0;
	flag.minus = 0;
	flag.space = 0;
	flag.width = 0;
	flag.precision = 0;
	flag.l = 0;
	flag.ll = 0;
	flag.h = 0;
	flag.hh = 0;
}

void 	light_flags(t_all all)
{
	t_flag flag;
	int i;
	int j;

	init_flag(flag);
	j = 0;
	while (tab[j])
	{
		i = 0;
		while(tab[j][i])
		{
			tab[j][i] == '#' ? flag.hash = 1 : 0;
			tab[j][i] == '0' ? flag.zero = 1 : 0;
			tab[j][i] == '+' ? flag.plus = 1 : 0;
			tab[j][i] == '-' ? flag.minus = 1 : 0;
			tab[j][i] == ' ' ? flag.space = 1 : 0;
			isnum(tab[j][i]) ? flag.width = ??  // a voir
			tab[j][i] == '.precision' ? // a voir
			tab[j][i] == 'l' ? flag.l = 1 : 0;
			tab[j][i] == 'll' ? flag.ll = 1 : 0;
			tab[j][i] == 'h' ? flag.h = 1 : 0;
			tab[j][i] == 'hh' ? flag.hh = 1 : 0;
			i++;
		}
		j++;
	}

}
