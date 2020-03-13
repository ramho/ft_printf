#include "printf.h"

void	init_function(int (*conversion[122])(t_base *all))
{
	conversion[99] = c_conversion;
	conversion[112] = p_conversion;
	conversion[115] = s_conversion;
	conversion[100] = di_conversion;
	conversion[105] = di_conversion;
	// conversion['o'] = o_conversion; // o
	conversion[117] = di_conversion;  // u
	// conversion['x'] = x_conversion; // x
	// conversion['X'] = X_conversion; // X
	// conversion['f'] = f_conversion; // f
}

void init_value_of_base(t_base *all)
{

	all->con_str = NULL;
	all->len = 0;
	all->tot_len = 0;
}
