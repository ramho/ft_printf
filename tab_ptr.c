#include "printf.h"

void	init_function(int (*conversion[122])(t_base *all))
{
	conversion[99] = c_conversion;
	conversion[112] = p_conversion;
	conversion[115] = s_conversion;
	conversion[100] = di_conversion;
	conversion[105] = di_conversion;
	conversion[111] = o_conversion; // o
	conversion[117] = u_conversion;  // u
	conversion[120] = xX_conversion; // x
	conversion[88] = xX_conversion; // X
	// conversion[102] = f_conversion; // f
}

void init_value_of_base(t_base *all)
{

	all->con_str = NULL;
	all->len = 0;
	all->tot_len = 0;
}
