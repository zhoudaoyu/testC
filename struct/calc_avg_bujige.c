#include <stdio.h>
#define SIZE 3
struct stu
{
	int num;
	char * name;
	char sex;
	float score;
};

struct stu boy[SIZE]={
		{101, "Li Ping", 'M', 45},
		{102, "Zhang Ping", 'M', 62.5},
		{103, "He Fang", 'F', 92.5},
};

void main()
{
	int i, count;
	float total, avg;
	count = 0;
	for (i = 0; i < SIZE; i++)
	{
		total += boy[i].score;
		if (boy[i].score < 60)
		{
			count++;
		}
	}
	avg = total / SIZE;
	printf("Total is %.1f\n", total);
	printf("AVG is %.1f\n", avg);
	printf("count is %d\n", count);
}
