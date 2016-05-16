#include <stdio.h>
void butler(void);
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	getchar();
}

void butler(void)
{
	printf("You sang, sir?\n");
}
