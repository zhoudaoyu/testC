#include <stdio.h>
void swap(int * p1, int * p2);

int main(void)
{
	int a[1], b[1];
	a[0] = 2;
	b[0] = 3;

	printf("before swap, a = %d, b = %d\n", a[0], b[0]);
	swap(a, b);
	printf("after swap, a = %d, b = %d\n", a[0], b[0]);
}

void swap(int * p1, int * p2)
{
	int * temp;

	temp = p1;
	p1 = p2;
	p2 = temp;
}
