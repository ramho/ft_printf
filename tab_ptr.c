#include "printf.h"

int	(*conversion[10])(t_all all)
{
	conversion[c] = c_conversion(all);
	conversion[s] = s_conversion(all);
	conversion[p] = p_conversion(all);
	conversion[d] = d_conversion(all);
	conversion[i] = i_conversion(all);
	conversion[o] = o_conversion(all);
	conversion[u] = u_conversion(all);
	conversion[x] = x_conversion(all);
	conversion[X] = X_conversion(all);
	conversion[f] = f_conversion(all);
}
