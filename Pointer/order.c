#include <stdio.h>

int main(void)
{
	int data[] = {100, 200};
	int moredata[] = {300, 400};

	int * p1, * p2, * p3;

	p1 = p2 = data;
	p3 = moredata;

	printf("value of *p1 is %d, *p2 is %d, *p3 is %d\n", *p1, *p2, *p3);
	printf("value of *p1++ is %d, *++p2 is %d, (*p3)++ is %d\n", *p1++, *++p2, (*p3)++);
	printf("value of *p1 is %d, *p2 is %d, *p3 is %d\n", *p1, *p2, *p3);

}
