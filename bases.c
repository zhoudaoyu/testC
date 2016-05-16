#include <stdio.h>
int main(void)
{
	unsigned long long x = 18446744073709551616LL;
	printf("dec = %LLu; octal = %LLo; hex = %LLx\n", x, x, x);
	printf("dec = %LLu; octal = %#LLo; hex = %#LLx\n", x, x, x);
	getchar();
	return 0;
}
