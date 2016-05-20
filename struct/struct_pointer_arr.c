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
}, *ps;

int main(void)
{
	ps = boy;
	int i;
	for(i = 0; i < SIZE; i++, ps++)
	{
		printf("Number=%d\nName=%s\nSex=%c\nScore=%.1f\n", ps -> num, ps -> name, ps -> sex, ps -> score);
	}
	return 0;
}
