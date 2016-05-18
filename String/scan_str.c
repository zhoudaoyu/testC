#include <stdio.h>
int main(void)
{
	char name1[11], name2[11];
	int count;
	printf("Please enter 2 names.\n");
	count = scanf("%s %10s", name1, name2);
	printf("count = %d, name1 = %s, name2 = %s", count, name1, name2);
	return 0;
}
