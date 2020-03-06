#include <stdio.h>
#include "printf.h"

int main()
{
	char *c = "j";

//	FOR c
					// ft_printf("|%c|\n", 'c');
					// ft_printf("min width of 5 |%7c|\n", 'c');
					// ft_printf("left adjustment|%-5c|\n", 'c');
//	printf("UB|%.5c|\n", 'c');
//	printf("UB %5 c", 'c');
//	printf("UB %#c", 'c');
//	printf("UB % c", 'c');
//	printf("precision UB %.5c", 'c');
//	printf("UB|%+c|\n", 'c');
//	printf("UB|%0c|\n", 'c');
//	printf("UB|%0-5c|\n", 'c');
//	printf("UB|%-05c|\n", 'c');

// FOR p

	printf("|%p|\n", c);
	//UB printf("%#p", c);
	printf("|%-20p|\n", c);
	//UB printf("%+p", c);
	//UBgiprintf("% p", c);
	//UB printf("%0p", c);
	printf("|%20p|\n", c);


//	FOR s
//	FOR d
	// printf("%00d\n", 1);
	// printf("%0000d\n",1);
	// printf("%033d\n",1);
	// printf("%030d\n",1);
//	printf("%-0000d",1); - overides the 0
}
