#include <stdio.h>
#define SIZE 3

struct stu
{
	int num;
	char * name;
	char sex;
	float score;
}boy[SIZE]={
		{101, "Li Ping", 'M', 45},
		{102, "Zhang ping", 'M', 62.5},
		{103, "He Fang", 'F', 92.5},
};

float ave(struct stu *ps);

int main(void)
{
	struct stu *ps;
	ps = boy;
	printf("AVG is %.1f\n", ave(ps));
	return 0;
}

float ave(struct stu *ps)
{
	int i;
	float  total = 0;
	for (i = 0; i < SIZE; i++, ps++){
		total += ps->score;
	}
	return total/SIZE;
}
