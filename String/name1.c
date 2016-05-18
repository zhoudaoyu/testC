#include <stdio.h>
#define MAX 81

int main(void)
{
	char name[MAX];
	printf ("Hi! What's your name?\n");
	char * input  = gets(name);
	printf("Nice name, %s.\n", name);
	printf("name = %s, &name = %p, name = %p\n", name, &name, name);
	printf("input = %s, &input = %p, input = %p\n", input, &input, input);
	return 0;
}
