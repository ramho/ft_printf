#include "printf.h"

int main(void)
{
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

	printf("----\n");
	printf("8  |%-+10.3u|\n", -21); // + to add to dlen bnd precision before width
	ft_printf("8  |%-+10.3u|\n", -21); // + to add to dlen bnd precision before width
	printf("----\n");
	printf("9  %+00010u\n", -21); // without precision padding of 0
	ft_printf("9  %+00010u\n", -21); // without precision padding of 0
	printf("----\n");
	printf("1  %010u\n", -21); // without precision padding of 0
	ft_printf("1  %010u\n", -21); // without precision padding of 0
	printf("----\n");
	printf("2  %+ 10u\n", -21); // without precision padding of 0
	ft_printf("2  %+ 10u\n", -21); // without precision padding of 0
	printf("----\n");
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

return(0);
}
