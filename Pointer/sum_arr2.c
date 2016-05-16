#include <stdio.h>
#define SIZE 5
long sum(int * p1, int * p2);
int main(void)
{
	int marbles[SIZE] = {20, 13, 15, 48, 35};
	long answer;

	answer = sum(marbles, marbles + SIZE);
	printf("Value of answer is %d\n", answer);
}

long sum(int * p1, int * p2)
{
	long total = 0;
	while(p1 < p2)
	{
		total += *p1;
		p1++;
	}
	return total;
}
