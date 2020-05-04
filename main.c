#include "printf.h"
#include <limits.h>

#define x(p1, p2)    printf("Printf result:    %d\nFt_printf result: %d\n\n", p1, p2 -1)

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

// to try


// printf ("|%.14f|\n", 2.981);
// ft_printf ("|%.14f|\n", 2.981);
//
// x(printf    ("printf1     :|%x|\n", -123654789 ),
// ft_printf ("ft_printf1  :|%x|\n\n", -123654789 ));
// // //
// x(printf    ("printf1     :|%#x|\n",-896),
// ft_printf ("ft_printf1  :|%#x|\n\n",-896));
//
// x(printf    ("printf1     :|%lli|\n",(long long)0x11ff11ff11ff11ff ),
// ft_printf ("ft_printf1  :|%lli|\n\n", (long long)0x11ff11ff11ff11ff));
//
// x(printf    ("printf1     :|%hhd|\n",(char)-2 ),
// ft_printf ("ft_printf1  :|%hhd|\n\n",(char)-2 ));
//
// x(printf    ("printf1     :|%.5d|\n", -421),
// ft_printf ("ft_printf1  :|%.5d|\n\n", -421));

// ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
// //1
// x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 0,0,0,0,0));
// //2
// x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 0,0,0,0,0));
// //3
// x(printf    ("printf2     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 0,0,0,0,0));
// //4
// x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 0,0,0,0,0));
// //5
// x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 0,0,0,0,0));
// //6
// x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 0,0,0,0,0));
// //7
// x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 0,0,0,0,0));
// //8
// x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 0,0,0,0,0));
// //9
// x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0),
//     ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 0,0,0,0,0));
//
// 		ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
// 		//1
		// x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// //2
		// x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// //3
		// x(printf    ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// //4
		// x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// // 5
		// x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		//
		// // 6
		// x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// //7
		// x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// //8
		// x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
		// //9
		// x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
	  //     ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));

		  // ft_printf("\n{magenta}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
		// //1
		// x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// // 2
		// x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //3
		// x(printf    ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //4
		// x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //5
		// x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //6
		// x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //7
		// x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //8
		// x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //9
		// x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
		//     ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
		// //9.0
		// x(printf    ("printf9.0   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0),
		//     ft_printf ("ft_printf9.0:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.0,999.0,999.0,999.0,999.0));
		// //9.1
		// x(printf    ("printf9.1   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1),
		//     ft_printf ("ft_printf9.1:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.1,999.1,999.1,999.1,999.1));
		// //9.2
		// x(printf    ("printf9.2   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2),
		//     ft_printf ("ft_printf9.2:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.2,999.2,999.2,999.2,999.2));
		// //9.3
		// x(printf    ("printf9.3   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3),
		//     ft_printf ("ft_printf9.3:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.3,999.3,999.3,999.3,999.3));
		// //9.4
		// x(printf    ("printf9.4   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4),
		//     ft_printf ("ft_printf9.4:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.4,999.4,999.4,999.4,999.4));
		// //9.5
		// x(printf    ("printf9.5   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5),
		//     ft_printf ("ft_printf9.5:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.5,999.5,999.5,999.5,999.5));
		// //9.6
		// x(printf    ("printf9.6   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6),
		//     ft_printf ("ft_printf9.6:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.6,999.6,999.6,999.6,999.6));
		// //9.7
		// x(printf    ("printf9.7   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7),
		//     ft_printf ("ft_printf9.7:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.7,999.7,999.7,999.7,999.7));
		// //9.8
		// x(printf    ("printf9.8   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8),
		//     ft_printf ("ft_printf9.8:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.8,999.8,999.8,999.8,999.8));
		// //9.9
		// x(printf    ("printf9.9   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9),
		//     ft_printf ("ft_printf9.9:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.9,999.9,999.9,999.9,999.9));
		// //10
		// x(printf    ("printf10    :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.),
		//   ft_printf   ("ft_printf9. :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.,999.,999.,999.,999.));

		printf("printf --> %.2f\n", 999.999);
		ft_printf("MOI --> %.2f\n\n", 999.999);
		// printf("printf    |%5.1f|\n", 1.1);
		// ft_printf("ft_printf |%5.1f|\n\n", 1.1);
		// printf("printf    |%-0#5.1f|\n", 999.1);
		// ft_printf("ft_printf |%-0#5.1f|\n\n", 999.1);
		// printf("printf    |%-0#5.1f|\n", 999.3);
		// ft_printf("ft_printf |%-0#5.1f|\n\n", 999.3);
		// printf("printf    |%-0#5.1f|\n", 999.9);
		// ft_printf("ft_printf |%-0#5.1f|\n\n", 999.9);
		// printf("printf    |%-0#5.f|\n", 999.9);
		// ft_printf("ft_printf |%-0#5.f|\n\n", 999.9);






		// printf("printf    --> |%-0#5.0f| |%-0#5.0f|\n", 999.5, 999.6);
		// ft_printf("ft_printf --> |%-0#5.0f| |%-0#5.0f|\n", 999.5, 999.6);
		// printf("printf    --> |%-0#5.5f| |%-0#5.5f|\n", 9.511135, 9.611135);
		// ft_printf("ft_printf --> |%-0#5.5f| |%-0#5.5f|\n", 9.511135, 9.611135);

	// RETOUR DE PRINTF
	// ret = printf("%d\n", 42);
	// printf("ret printf = |%d|\n", ret);
	// printf("-------\n");
	// ret = ft_printf("%d\n", 42);
	// printf("ret ft_printf = |%d|\n", ret);


return(0);
}
