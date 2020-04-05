#include "printf.h"

void	init_function(int (*conversion[122])(t_base *all))
{
	// printf("enter init function\n");
	conversion[99] = c_conversion;
	conversion[112] = p_conversion;
	conversion[115] = s_conversion;
	conversion[100] = di_conversion; // d
	conversion[105] = di_conversion; // i
	conversion[111] = o_conversion; // o
	conversion[117] = u_conversion;  // u
	conversion[120] = x_conversion; // x
	conversion[88] = X_conversion; // X
	// conversion[102] = f_conversion; // f
	conversion[37] = modulo_conversion;
}

void init_value_of_base(t_base *all)
{

	all->con_str = NULL;
	all->len = 0;
	all->tot_len = 0;
}
