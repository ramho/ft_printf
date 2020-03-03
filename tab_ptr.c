#include "printf.h"

void	(*conversion[10])(t_all all, char **tab)
{
	conversion[c] = c_conversion(all, tab);
	conversion[s] = s_conversion(all, tab);
	conversion[p] = p_conversion(all, tab);
	conversion[d] = d_conversion(all, tab);
	conversion[i] = i_conversion(all, tab);
	conversion[o] = o_conversion(all, tab);
	conversion[u] = u_conversion(all, tab);
	conversion[x] = x_conversion(all, tab);
	conversion[X] = X_conversion(all, tab);
	conversion[f] = f_conversion(all, tab);
}
