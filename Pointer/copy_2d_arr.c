#include <stdio.h>
#define SIZE 5
void copy_arr2(double * source, double * target, int n);

int main(void)
{
	double arr2d[][SIZE] = {{1.0, 2.0, 3.0, 4.0, 5.0}, {5.0, 4.0, 3.0, 2.0, 1.0}};
	double target2d[2][SIZE];
	int i;

	for (i = 0; i < 2; i++){
		copy_arr2(arr2d[i], target2d[i], SIZE);
	}

	int j;
	for (i = 0; i < 2; i++){
		for (j = 0; j < SIZE; j++)
		{
			printf("target2d[%d][%d] = %.1f\n", i , j, target2d[i][j]);
		}
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
