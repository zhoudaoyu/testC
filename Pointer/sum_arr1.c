#include <stdio.h>
#define SIZE 5
int sum(int ar[], int n);
int main(void)
{
	int marbles[] = {20, 10, 5, 39, 4};

	int answer = 0;

	answer = sum(marbles, SIZE);
	printf("The total size of answer is %d\n", answer);
	printf("The size of marbles is %d bytes.\n", sizeof marbles);
}

int sum(int * ar, int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		total += *(ar + i);
	}

	printf("The size of ar is %d\n", sizeof ar);
	return total;
}
