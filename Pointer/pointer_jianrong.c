#include <stdio.h>

int main(void)
{
	int n = 5;
	double x;
	int * pi = &n;
	double * pd = &x;

	x = n;
//���棺�Ӳ����ݵ�ָ�����͸�ֵ [Ĭ������]
//	pd = pi;

	int * pt;
	int (*pa)[3];
	int ar1[2][3];
	int ar2[3][2];

	int **p2;
// �ͱ����洢������������أ� �洢���������ͣ�������С��һ�£����ܹ���ֵ��
	pt = &ar1[0][0];
	pt = ar1[0];
//	pt = ar1;
	pa = ar1;
//	pa = ar2;
	p2 = &pt;
	*p2 = ar2[0];
//	p2 = ar2;
}
