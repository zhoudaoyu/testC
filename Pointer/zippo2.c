#include <stdio.h>

int main(void)
{
	int num[4][2] = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
	int (*ptr)[2];

	ptr = num;

	printf("ptr = %p, ptr + 1 = %p\n", ptr, ptr + 1);
	printf("ptr[0] = %p, ptr[0] + 1 = %p\n", ptr[0], ptr[0] + 1);
	printf("*ptr = %p, *ptr + 1 = %p\n", *ptr, *ptr + 1);
	printf("ptr[0][0] = %d\n", ptr[0][0]);
	printf("*ptr[0] = %d\n", *ptr[0]);
	printf("**ptr = %d\n", **ptr);
	printf("ptr[2][1] = %d\n", ptr[2][1]);
	printf("*(*(ptr + 2) + 1) = %d\n", *(*(ptr + 2) + 1));

	return 0;
}
