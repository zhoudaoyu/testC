#include <stdio.h>

int main(void)
{
	int num[4][2] = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};

	printf("num = %p, num + 1 = %p\n", num, num + 1);
	printf("num[0] = %p, num[0] + 1 = %p\n", num[0], num[0] + 1);
	printf("*num = %p, *num + 1 = %p\n", *num, *num + 1);
	printf("num[0][0] = %d\n", num[0][0]);
	printf("*num[0] = %d\n", *num[0]);
	printf("**num = %d\n", **num);
	printf("num[2][1] = %d\n", num[2][1]);
	printf("*(*(num + 2) + 1) = %d\n", *(*(num + 2) + 1));

	return 0;
}
