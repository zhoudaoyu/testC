#include <stdio.h>
#define SIZE 5
int maxDoubleValueIndex(double * start, int size);

int main(void)
{
	double ar1[SIZE] = {1.1, 2.2, 4.4, 5.5, 3.3};
	int maxIndex = maxDoubleValueIndex(ar1, SIZE);
	printf("maxValue=%d", maxIndex);
}

int maxDoubleValueIndex(double * start, int size)
{
	double maxValue;
	int maxIndex;
	int i;

	for(maxValue = *start, maxIndex = i = 0; i < size; i++, start++)
	{
		if (maxValue < *start)
		{
			maxValue = *start;
			maxIndex = i;
		}
	}
	return maxIndex;
}
