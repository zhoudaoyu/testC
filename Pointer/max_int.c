#include <stdio.h>
#define SIZE 5
int maxIntValue(int * start, int size);

int main(void)
{
	int ar1[SIZE] = {1,2,4,5,3};
	int maxValue = maxIntValue(ar1, SIZE);
	printf("maxValue=%d", maxValue);
}

int maxIntValue(int * start, int size)
{
	int max;
	int i;

	for(max = *start, i = 0; i < size; i++, start++)
	{
		if (max < *start)
		{
			max = *start;
		}
	}
	return max;
}
