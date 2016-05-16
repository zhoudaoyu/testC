#include <stdio.h>
#define SIZE 5
double maxMinDoubleMinusValue(double * start, int size);

int main(void)
{
	double ar1[SIZE] = {1.1, 2.2, 4.4, 5.5, 3.3};
	double minusValue = maxMinDoubleMinusValue(ar1, SIZE);
	printf("maxValue=%.1f", minusValue);
}

double maxMinDoubleMinusValue(double * start, int size)
{
	double maxValue;
	double minValue;
	int i;

	for(minValue = maxValue = *start, i = 0; i < size; i++, start++)
	{
		if (maxValue < *start)
		{
			maxValue = *start;
		}

		if (minValue > *start)
		{
			minValue = *start;
		}
	}
	return maxValue - minValue;
}
