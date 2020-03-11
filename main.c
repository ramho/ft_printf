#include "printf.h"

int main(void)
{
	 //char *s = "salut";
	// ft_printf("salut |%s|\n", s);
	// printf("salut |%s|\n", s);
  //
  // ft_printf("les %-5c%c%10c%c%c de 19\n", 'c', 'h', 'i', 'l', 'l');
	// printf("les %-5c%c%10c%c%c de 19\n", 'c', 'h', 'i', 'l', 'l');

	//ft_printf(" |%#5c|\n", 'm');
	//printf(" |%#5c|\n", 'm');

  // ft_printf("|%-5c|\n", 'c');
	// printf("|%-5c|\n", 'c');

  // ft_printf("|%-15p|\n", s);
	// printf("|%-15p|\n", s);
  //
 	// ft_printf("|%-20p|\n", s);
	// printf("|%-20p|\n", s);
  //
 	// ft_printf("|%20p|\n", s);
	// printf("|%20p|\n", s);
  //
	// ft_printf("%s\n", s);
	// printf("%s\n", s);

//	ft_printf("|%.-15s|\n",

//	printf("printf |%.-1s|\n", s);

	// ft_printf("|%-50c|\n", '\0');
	// printf("|%-50c|\n", '\0');

	// printf("%+.5d\n", 12);
	// printf("%+5d\n", 12);
	// printf("%+05d\n", 12);
	// printf("%+015.5d\n", 12);
	// printf("%-05d\n", 12); //
	// printf("%hd\n", 12);
	// printf("%hhd\n", 122);
	// printf("%ld\n", 12);
	// printf("%lld\n", 12);

	printf("%10.1d\n", 21);
	printf("%-10.2d\n", 21);
	printf("%-+10.3d\n", 21); // + to add to dlen bnd precision before width
	printf("1  %-010.2d\n", 21); //
	printf("2  %010.2d\n", 21); // with precision no padding of 0
	printf("3  %010d\n", 21); // without precision padding of 0
	printf("4  %-10.2d\n", 21); //
	printf("%10.5d\n", 21);
	printf("%.1d\n", 21);// precison smaller tan dlen so no 0
	printf("%.3d\n", 21);
	printf("%.5d\n", 21); // precision adds 000 before d if precision bigger than dlen
return(0);
}
