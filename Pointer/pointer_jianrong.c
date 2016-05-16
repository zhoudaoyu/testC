#include <stdio.h>

int main(void)
{
	int n = 5;
	double x;
	int * pi = &n;
	double * pd = &x;

	x = n;
//警告：从不兼容的指针类型赋值 [默认启用]
//	pd = pi;

	int * pt;
	int (*pa)[3];
	int ar1[2][3];
	int ar2[3][2];

	int **p2;
// 和变量存储的数据类型相关， 存储的数据类型（包括大小）一致，才能够赋值。
	pt = &ar1[0][0];
	pt = ar1[0];
//	pt = ar1;
	pa = ar1;
//	pa = ar2;
	p2 = &pt;
	*p2 = ar2[0];
//	p2 = ar2;
}
