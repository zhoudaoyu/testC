#include <stdio.h>
#define COLS 4
int sum2d(int ar[][COLS], int rows);
int sum(int ar[], int n);

int main(void)
{
	int total1, total2, total3, total4;
	int * pt1;
	int (*pt2)[COLS];
	int (*pt3)[COLS];

	pt1 = (int [2]){10, 20};
	pt2 = (int [2][COLS]){{1, 2, 3, 4}, {-1, -2, -3, -4}};

	total1 = sum(pt1, 2);
	total2 = sum2d(pt2, 2);
	total3 = sum((int []){1, 2, 3, 4, 5, 6}, 6);
	total4 = sum2d((int [][COLS]){{1, 2, 3, 4}, {-2, -3, -4, -5}}, 2);

	printf("total1 = %d\n", total1);
	printf("total2 = %d\n", total2);
	printf("total3 = %d\n", total3);
	printf("total4 = %d\n", total4);
	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total = 0;
	for (i= 0; i < n ; i++)
	{
		total += ar[i];
	}
	return total;
}

int sum2d(int ar[][COLS], int n)
{
	int i, j;
	int total = 0;

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			total += ar[i][j];
		}
	}
	return total;
}
