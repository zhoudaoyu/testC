#include <stdio.h>
#define SIZE 5
void copy_arr1(double source[], double target[], int n);
void copy_arr2(double * source, double * target, int n);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE] ;
	double target2[SIZE] ;


	copy_arr1(source, target1, SIZE);
	copy_arr2(source, target2, SIZE);

	int i;

	for(i = 0; i < SIZE ; i++)
	{
		printf("target1[%d] = %.1f\n", i, target1[i]);
	}

	for(i = 0; i < SIZE ; i++)
	{
		printf("*(target2 + %d) = %.1f\n", i, *(target2 + i));
	}
}

void copy_arr1(double source[], double target[], int n)
{
	int i;
	for(i = 0; i < n ; i++)
	{
		target[i]  = source[i];
	}
}

void copy_arr2(double * source, double * target, int n)
{
	int i;
	for(i = 0; i < n ; i++)
	{
		*(target + i) = *(source + i);
	}
}
