#include <stdio.h>
#include <stdlib.h>
struct stu
{
	int num;
	char * name;
	char sex;
	float score;
};

int main(void)
{
	struct stu * ps;
	ps = (struct stu *)malloc(sizeof(struct stu));
	ps->name = "Daoyu";
	ps->num = 10;
	ps->sex = 'M';
	ps->score = 99.9;
	printf("Number=%d\nName=%s\nSex=%c\nScore=%.1f\n", ps -> num, ps -> name, ps -> sex, ps -> score);
	return 0;
}
