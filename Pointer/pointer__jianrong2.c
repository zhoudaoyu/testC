#include <stdio.h>

int main(void)
{
	const int * p1;
	int a;
	int n = 5;
	const int **pptr;

	*pptr = &n;
	p1 = &n;
	*pptr = p1;
	pptr = &p1; // ���p1 �� ��const ָ�����ͣ� ��������ֵ����
	printf("**pptr=%d\n", **pptr);
	printf("*p1=%d\n", *p1);
	return 0;
}
