#include <stdio.h>
struct stu
{
	int num;
	char * name;
	char sex;
	float score;
}boy1={101, "Li Ping", 'M', 46}, *pstu;

int main(void)
{
	pstu = &boy1;
	printf("Number=%d\nName=%s\n", pstu -> num, pstu -> name);
	printf("Sex=%c\nScore=%.1f\n", pstu -> sex, pstu -> score);
	return 0;
}
