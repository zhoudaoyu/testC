#include <stdio.h>
void interchange(int * u, int * v);

int main(void)
{
	int u = 10, v = 5;
	printf("Originally u = %d and v = %d.\n", u, v);
	interchange(&u, &v);
	printf("Now u = %d and v = %d.\n", u, v);
	return 0;
}

void interchange(int * u, int * v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}
