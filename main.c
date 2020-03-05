#include "printf.h"

int main(void)
{
//	char *str = "caca";
	//ft_printf("salut %s", str);
	// printf("-014d |%-014d|\n", 512);
	// printf("-14d |%-14d|\n", 512);
	// printf("014d |%014d|\n", 512);
	// printf("14.10d |%14.10d|\n", 512);
	// printf("9.10d |%9.10d|\n", 512);
	// printf("5.10d |%5.10d|\n", 512);
  //   simple_printf("salut les %p\n", str); // 0x10 on heap
	// printf("psalut les %p\n", str);
  //   simple_printf("salut les %c\n", str[0]);
	// printf("psalut les %c\n", str[0]);
  //   simple_printf("salut les %c\n", str[3]);
  //   printf("psalut les %c\n", str[3]);
	// simple_printf("salut les %p\n", &str); // 0x7ff on stack
  //   printf("psalut les %p\n", &str);
	// simple_printf("salut les %p\n", &str[0]);
  //   printf("psalut les %p\n", &str[0]);
	// simple_printf("salut les %p\n", &str[3]);
  //   printf("psalut les %p\n", &str[3]);
  //ft_printf("hello %s des %0.5d la %-#0.2s");
  ft_printf("%c", 'c');
  ft_printf("%5c", 'c');
  ft_printf("%-5c", 'c');
  printf("%c\n", 'c');
  printf("%5c\n", 'c');
  printf("%-5c\n", 'c');

}
