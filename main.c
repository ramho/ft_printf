#include "printf.h"
#include <limits.h>

int main(void)
{
			int ret = 0;
	//  char *s = "salut";
	//
 	// printf("TYPE C\n");
	// ft_printf("les %-5c%c%10c%c%c de 19\n", 'c', 'h', 'i', 'l', 'l');
	// printf("les %-5c%c%10c%c%c de 19\n", 'c', 'h', 'i', 'l', 'l');
	// ft_printf(" |%#5c|\n", 'm');
	// printf(" |%#5c|\n", 'm');
	// ft_printf("|%-5c|\n", 'c');
	// printf("|%-5c|\n", 'c');
	// ft_printf("|%-50c|\n", '\0');
	// printf("|%-50c|\n", '\0');
	//
	// printf("\nTYPE S\n\n");
	// ft_printf("salut |%s|\n", s);
	// printf("salut |%s|\n", s);
	// ft_printf("%s\n", s);
	// printf("%s\n", s);
	// ft_printf("|%10.1s|\n", s);
	// printf("|%10.1s|\n", s);
	//
	// printf("\nTYPE P\n\n");
	// ft_printf("|%-15p|\n", s);
	// printf("|%-15p|\n", s);
 	// ft_printf("|%-20p|\n", s);
	// printf("|%-20p|\n", s);
 	// ft_printf("|%20p|\n", s);
	// printf("|%20p|\n", s);

	// TYPE D, I
	// printf("%+.5d\n", 12);
	// printf("%+5d\n", 12);
	// printf("%+05d\n", 12);
	// printf("%+015.5d\n", 12);
	// printf("%-05d\n", 12); //
	// printf("%hd\n", 12);
	// printf("%hhd\n", 122);
	// printf("%ld\n", 12);
	// printf("%lld\n", 12);
	//
	// printf("1  %10.5d\n", 21);
	// ft_printf("1  %10.5d\n", 21);
	// printf("----\n");
	// printf("2  |%-10.2d|\n", 21);
	// ft_printf("2  |%-10.2d|\n", 21);
	// printf("----\n");
	// printf("3  %010d\n", 21); // without precision padding of 0
	// ft_printf("3  %010d\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %00010d\n", 21); // without precision padding of 0
	// ft_printf("4  %00010d\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("5  %.0004d\n", 21); // without precision padding of 0
	// ft_printf("5  %.0004d\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %10d\n", 21); // without precision padding of 0
	// ft_printf("4  %10d\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("3  |%+10.3d|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("3  |%+10.3d|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("4  |%+10d|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("4  |%+10d|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("5  |%+.3d|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("5  |%+.3d|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("6  |%-+10.3d|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("6  |%-+10.3d|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("7  %+00010d\n", 21); // without precision padding of 0
	// ft_printf("7  %+00010d\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("8  |%-+10.3d|\n", -21); // + to add to dlen bnd precision before width
	// ft_printf("8  |%-+10.3d|\n", -21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("9  %+00010d\n", -21); // without precision padding of 0
	// ft_printf("9  %+00010d\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("1  %010d\n", -21); // without precision padding of 0
	// ft_printf("1  %010d\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("2  %+ 10d\n", -21); // without precision padding of 0
	// ft_printf("2  %+ 10d\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("8  %+00010.3d\n", 21); // without precision padding of 0
	// ft_printf("8  %+00010.3d\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("----\n");
	// printf("4  %-010.2d\n", 21); //
	// ft_printf("4  %-010.2d\n", 21); //
	// printf("5  %-010d\n", 21); //
	// ft_printf("5  %-010d\n", 21); //
	// printf("----\n");
	// printf("5  %010.2d\n", 21); // with precision no padding of 0
	// ft_printf("5  %010.2d\n", 21); // with precision no padding of 0
	// printf("----\n");
	// printf("7  %-10.2d\n", 21); //
	// ft_printf("7  %-10.2d\n", 21); //
	// printf("----\n");
	// printf("8  %10.5d\n", 21);
	// ft_printf("8  %10.5d\n", 21);
	// printf("----\n");
	// printf("9  %.1d\n", 21);// precison smaller tan dlen so no 0
	// ft_printf("9  %.1d\n", 21);// precison smaller tan dlen so no 0
	// printf("----\n");
	// printf("1  %.3d\n", 21);
	// ft_printf("1  %.3d\n", 21);
	// printf("----\n");
	// printf("2  %.5d\n", 21); // precision adds 000 before d if precision bigger than dlen
	// ft_printf("2  %.5d\n", 21); // precision adds 000 before d if precision bigger than dlen
	// ft_printf("%d\n", -21);
	// printf("%d\n", -21);

	// TYPE U
	// printf("1  %10.5u\n", 21);
	// ft_printf("1  %10.5u\n", 21);
	// printf("----\n");
	// printf("2  |%-10.2u|\n", 21);
	// ft_printf("2  |%-10.2u|\n", 21);
	// printf("----\n");
	// printf("3  %010u\n", 21); // without precision padding of 0
	// ft_printf("3  %010u\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %00010u\n", 21); // without precision padding of 0
	// ft_printf("4  %00010u\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("5  %.0004u\n", 21); // without precision padding of 0
	// ft_printf("5  %.0004u\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %10u\n", 21); // without precision padding of 0
	// ft_printf("4  %10u\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("3  |%+10.3u|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("3  |%+10.3u|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("4  |%+10u|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("4  |%+10u|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("5  |%+.3u|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("5  |%+.3u|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("6  |%-+10.3u|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("6  |%-+10.3u|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("1  %010u\n", 21); // without precision padding of 0
	// ft_printf("1  %010u\n", 21); // without precision padding of 0
	// printf("2  %015.10u\n", 21); // without precision padding of 0
	// ft_printf("2  %015.10u\n", 21); // without precision padding of 0
	// printf("3  %-010u\n", 21); // without precision padding of 0
	// ft_printf("3  %-010u\n", 21); // without precision padding of 0

	// printf("----\n");
	// printf("8  |%-+10.3u|\n", -21); // + to add to dlen bnd precision before width
	// ft_printf("8  |%-+10.3u|\n", -21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("9  %+00010u\n", -21); // without precision padding of 0
	// ft_printf("9  %+00010u\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("1  %010u\n", -21); // without precision padding of 0
	// ft_printf("1  %010u\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("2  %+ 10u\n", -21); // without precision padding of 0
	// ft_printf("2  %+ 10u\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("8  %+00010.3u\n", 21); // without precision padding of 0
	// ft_printf("8  %+00010.3u\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("----\n");
	// printf("4  %-010.2u\n", 21); //
	// ft_printf("4  %-010.2u\n", 21); //
	// printf("----\n");
	// printf("5  %010.2u\n", 21); // with precision no padding of 0
	// ft_printf("5  %010.2u\n", 21); // with precision no padding of 0
	// printf("----\n");
	// printf("7  %-10.2u\n", 21); //
	// ft_printf("7  %-10.2u\n", 21); //
	// printf("----\n");
	// printf("8  %10.5u\n", 21);
	// ft_printf("8  %10.5u\n", 21);
	// printf("----\n");
	// printf("9  %.1u\n", 21);// precison smaller tan dlen so no 0
	// ft_printf("9  %.1u\n", 21);// precison smaller tan dlen so no 0
	// printf("----\n");
	// printf("1  %.3u\n", 21);
	// ft_printf("1  %.3u\n", 21);
	// printf("----\n");
	// printf("2  %.5u\n", 21); // precision adds 000 before d if precision bigger than dlen
	// ft_printf("2  %.5u\n", 21); // precision ad

	// TYPE O
	// printf("1  %10.5o\n", 21);
	// ft_printf("1  %10.5o\n", 21);
	// printf("----\n");
	// printf("2  |%-10.2o|\n", 21);
	// ft_printf("2  |%-10.2o|\n", 21);
	// printf("----\n");
	// printf("3  %010o\n", 21); // without precision padding of 0
	// ft_printf("3  %010o\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %00010o\n", 21); // without precision padding of 0
	// ft_printf("4  %00010o\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("5  %.0004o\n", 21); // without precision padding of 0
	// ft_printf("5  %.0004o\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %10o\n", 21); // without precision padding of 0
	// ft_printf("4  %10o\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("3  |%+10.3o|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("3  |%+10.3o|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("4  |%+10o|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("4  |%+10o|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("5  |%+.3o|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("5  |%+.3o|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("6  |%-+10.3o|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("6  |%-+10.3o|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("1  %010o\n", 21); // without precision padding of 0
	// ft_printf("1  %010o\n", 21); // without precision padding of 0
	// printf("2  %015.10o\n", 21); // without precision padding of 0
	// ft_printf("2  %015.10o\n", 21); // without precision padding of 0
	// printf("3  %-010o\n", 21); // without precision padding of 0
	// ft_printf("3  %-010o\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("8  |%-10.3o|\n", -21); // + to add to dlen bnd precision before width
	// ft_printf("8  |%-10.3o|\n", -21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("9  %00010o\n", -21); // without precision padding of 0
	// ft_printf("9  %00010o\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("1  %010o\n", -21); // without precision padding of 0
	// ft_printf("1  %010o\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("2  % 10o\n", -21); // without precision padding of 0
	// ft_printf("2  % 10o\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("8  %+00010.3o\n", 21); // without precision padding of 0
	// ft_printf("8  %+00010.3o\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %-010.2o\n", 21); //
	// ft_printf("4  %-010.2o\n", 21); //
	// printf("----\n");
	// printf("5  %010.2o\n", 21); // with precision no padding of 0
	// ft_printf("5  %010.2o\n", 21); // with precision no padding of 0
	// printf("----\n");
	// printf("7  %-10.2o\n", 21); //
	// ft_printf("7  %-10.2o\n", 21); //
	// printf("----\n");
	// printf("8  %10.5o\n", 21);
	// ft_printf("8  %10.5o\n", 21);
	// printf("----\n");
	// printf("9  %.1o\n", 21);// precison smaller tan dlen so no 0
	// ft_printf("9  %.1o\n", 21);// precison smaller tan dlen so no 0
	// printf("----\n");
	// printf("1  %.3o\n", 21);
	// ft_printf("1  %.3o\n", 21);
	// printf("----\n");
	// printf("2  %.5o\n", 21); // precision adds 000 before d if precision bigger than dlen
	// ft_printf("2  %.5o\n", 21); // precision ad

	 //TYPE xX

	// printf("1  %10.5x\n", 21);
	// ft_printf("1  %10.5x\n", 21);
	// printf("----\n");
	// printf("2  |%-10.2x|\n", 21);
	// ft_printf("2  |%-10.2x|\n", 21);
	// printf("----\n");
	// printf("3  %010x\n", 21); // without precision padding of 0
	// ft_printf("3  %010x\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %00010x\n", 21); // without precision padding of 0
	// ft_printf("4  %00010x\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("5  %.0004x\n", 21); // without precision padding of 0
	// ft_printf("5  %.0004x\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %10x\n", 21); // without precision padding of 0
	// ft_printf("4  %10x\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("3  |%10.3x|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("3  |%10.3x|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("4  |%10x|\n", 21); // + to add to dlen bnd precision before width
	// ft_printf("4  |%10x|\n", 21); // + to add to dlen bnd precision before width
	// printf("----\n");
	// printf("5  |%.3x|\n", 21); //  to add to dlen bnd precision before width
	// ft_printf("5  |%.3x|\n", 21); //  to add to dlen bnd precision before width
	// printf("----\n");
	// printf("6  |%-10.3x|\n", 21); //  to add to dlen bnd precision before width
	// ft_printf("6  |%-10.3x|\n", 21); //  to add to dlen bnd precision before width
	// printf("----\n");
	// printf("7  %10.5x\n", INT_MAX); // without precision padding of 0
	// ft_printf("7  %10.5x\n", INT_MAX); // without precision padding of 0
	// printf("----\n");
	// printf("8  |%-10.3x|\n", -21); //  to add to dlen bnd precision before width
	// ft_printf("8  |%-10.3x|\n", -21); //  to add to dlen bnd precision before width
	// printf("----\n");
	// printf("9  %050x\n", INT_MAX); // without precision padding of 0
	// ft_printf("9  %050x\n", INT_MAX); // without precision padding of 0
	// printf("----\n");
	// printf("1  %060.40x\n", INT_MAX); // without precision padding of 0
	// ft_printf("1  %060.40x\n", INT_MAX); // without precision padding of 0
	// printf("----\n");
	// printf("2  %10x\n", -21); // without precision padding of 0
	// ft_printf("2  %10x\n", -21); // without precision padding of 0
	// printf("----\n");
	// printf("8  %00010.3x\n", 21); // without precision padding of 0
	// ft_printf("8  %00010.3x\n", 21); // without precision padding of 0
	// printf("----\n");
	// printf("4  %-010.2x\n", 21); //
	// ft_printf("4  %-010.2x\n", 21); //
	// printf("5  %-010x\n", 21); //
	// ft_printf("5  %-010x\n", 21); //
	// printf("----\n");
	// printf("5  %010.2x\n", 21); // with precision no padding of 0
	// ft_printf("5  %010.2x\n", 21); // with precision no padding of 0
	// printf("----\n");
	// printf("7  %-10.2x\n", 21); //
	// ft_printf("7  %-10.2x\n", 21); //
	// printf("----\n");
	// printf("8  %10.5x\n", 21);
	// ft_printf("8  %10.5x\n", 21);
	// printf("----\n");
	// printf("9  %.1x\n", 21);// precison smaller tan dlen so no 0
	// ft_printf("9  %.1x\n", 21);// precison smaller tan dlen so no 0
	// printf("----\n");
	// printf("1  %.3x\n", 21);
	// ft_printf("1  %.3x\n", 21);
	// printf("----\n");
	// printf("2  %.5x\n", 21); // precision adds 000 before d if precision bigger than dlen
	// ft_printf("2  %.5x\n", 21);

	// ft_printf("%D\n", 0xff11ff11ff88);
	// printf("%D\n", 0xff11ff11ff88);
	// ft_printf("%d\n", 0xff11ff11ff88);
	// printf("%d\n", 0xff11ff11ff88);

	// TYPE MODULO %%
	// printf("P %.%\n");
	// ft_printf("|%.%|\n");
	// printf("----\n");
	// printf("P % %\n");
	// ft_printf("|% %|\n");


	// printf("P %.d\n", 1);
	// ft_printf("|%.d|\n", 1);
	// printf("----\n");
	// printf("P %.0d\n", 1);
	// ft_printf("|%.0d|\n", 1);


	// CURQUI
 	// printf("% d\n", 0);
 	// ft_printf("% d\n", 0);
	// printf("----\n");
	// printf("% .5d\n", 1);
	// ft_printf("% .5d\n", 1);
	// printf("----\n");
	// printf("%ld\n",0x44ff551100);
	// ft_printf("%ld\n",0x44ff551100);
	// printf("----\n");
	// printf("%lld\n",0x44ff551100);
	// ft_printf("%lld\n",0x44ff551100);
	// printf("----\n");
	// printf("%hd\n",0x44ff551100);
	// ft_printf("%hd\n",0x44ff551100);
	// printf("----\n");
	// printf("%.i\n", 5);
	// ft_printf("%.d\n", 5);
	// printf("----\n");
	// printf("%.5d\n", -421);
	// ft_printf("%.5d\n", -421);
	// printf("----\n");
	// printf("%+d\n", -4440);
	// ft_printf("%+d\n", -4440);
	// printf("----\n");
	// printf("%.0i\n", 0);
	// ft_printf("%.0i\n", 0);
	// printf("----\n");
	// printf("%.0d\n", 0);
	// ft_printf("%.0d\n", 0);
	// printf("----\n");
	// printf("%08d\n", -71);
	// ft_printf("%08d\n", -71);
	// printf("----\n");

	// printf("----\n");
	// printf("% 5d\n", 1);
	// ft_printf("% 5d\n", 1);
	// printf("----\n");
	// printf("%5d\n", 1);
	// ft_printf("%5d\n", 1);
	// printf("----\n");
	// printf("%05d\n", 1);
	// ft_printf("%05d\n", 1);

//	VARIOUS TEST WITH DI and flag.signe
// printf("%-d\n", 42);
// printf("%-d\n\n", -42);
// printf("%-.5d\n", 42);
// printf("%-.5d\n\n", -42);
// printf("%.5d\n", 42);
// printf("%.5d\n\n", -42);
// printf("%10.5d\n", 42);
// printf("%10.5d\n\n", -42);
// printf("%-10d\n", 42);
// printf("%-10d\n\n", -42);
// printf("%-10.5d\n", 42);
// printf("%-10.5d\n\n", -42);
// printf("%010d\n", 42);
// printf("%010d\n\n", -42);
// printf("%0d\n", 42);
// printf("%0d\n\n", -42);
// printf("%010d\n", 42);
// printf("%010d\n\n", -42);
// printf("%0.5d\n", 42);
// printf("%0.5d\n\n", -42);
// printf("%010.5d\n", 42);
// printf("%010.5d\n\n", -42);
// printf("%+010d\n", 42);
// printf("%+010d\n\n", -42);

// printf("%+0.5d\n", 42);
// ft_printf("%+0.5d\n", 42);
//
// printf("%+0.5d\n", -42);
// ft_printf("%+0.5d\n", -42);
//
// printf("%+010.5d\n", 42);
// ft_printf("%+010.5d\n", 42);
//
// printf("%+010.5d\n", -42);
// ft_printf("%+010.5d\n", -42);
//
// printf("%+10d\n", 42);
// ft_printf("%+10d\n", 42);
//
// printf("%+10d\n", -42);
// ft_printf("%+10d\n", -42);
//
// printf("%+010d\n", 42);
// ft_printf("%+010d\n", 42);
//
// printf("%+010d\n", -42);
// ft_printf("%+010d\n", -42);
//
// printf("%010d\n", 42);
// ft_printf("%010d\n", 42);
//
// printf("%010d\n", -42);
// ft_printf("%010d\n", -42);



printf("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0);
ft_printf("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 0,0,0,0,0);

printf    ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0);
ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 0,0,0,0,0);

printf    ("printf4     :|%0+5d|\n", 0);
ft_printf ("ft_printf4  :|%0+5d|\n\n", 0);

printf    ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0),
ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 0,0,0,0,0);

printf    ("printf7     :|% 03d|\n", -1);
ft_printf ("ft_printf7  :|% 03d|\n\n", -1);


	// RETOUR DE PRINTF
	// ret = printf("%d\n", 42);
	// printf("ret printf = |%d|\n", ret);
	// printf("-------\n");
	// ret = ft_printf("%d\n", 42);
	// printf("ret ft_printf = |%d|\n", ret);


return(0);
}
