#include "printf.h"

int main(void)
{
// 	 char *s = "salut";
// 	ft_printf("salut |%s|\n", s);
// 	printf("salut |%s|\n", s);
//
//   ft_printf("les %-5c%c%10c%c%c de 19\n", 'c', 'h', 'i', 'l', 'l');
// 	printf("les %-5c%c%10c%c%c de 19\n", 'c', 'h', 'i', 'l', 'l');
//
// 	//ft_printf(" |%#5c|\n", 'm');
// 	//printf(" |%#5c|\n", 'm');
//
//   ft_printf("%-5c\n", 'c');
// 	printf("%-5c\n", 'c');
//
//   ft_printf("|%-15p|\n", s);
// 	printf("|%-15p|\n", s);
//
//  	ft_printf("|%-20p|\n", s);
// 	printf("|%-20p|\n", s);
//
//  	ft_printf("|%20p|\n", s);
// 	printf("|%20p|\n", s);
//
// 	ft_printf("%s\n", s);
// 	printf("%s\n", s);
//
// //	ft_printf("|%.-15s|\n",

// //	printf("printf |%.-1s|\n", s);
//
// 	ft_printf("|%-50c|\n", '\0');
// 	printf("|%-50c|\n", '\0');

	printf("1%+.5d\n", 12);
	printf("2%+5d\n", 12);
	printf("3%+05d\n", 12);
	printf("4%+015.5d\n", 12);
	printf("5%-05d\n", 12);
return(0);
}
