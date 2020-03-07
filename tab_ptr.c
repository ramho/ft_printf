#include "printf.h"

void	init_function(int (*conversion[255])(t_base *all))
{
	conversion[99] = c_conversion;
	conversion[112] = p_conversion;
	conversion[115] = s_conversion;
	// conversion['d'] = d_conversion(all);
	// conversion['i'] = i_conversion(all);
	// conversion['o'] = o_conversion(all);
	// conversion['u'] = u_conversion(all);
	// conversion['x'] = x_conversion(all);
	// conversion['X'] = X_conversion(all);
	// conversion['f'] = f_conversion(all);
}
