#include <stdio.h>
struct stu
{
	int num;
	char * name;
	char sex;
	float score;
};

void main()
{
	struct stu boy2;
	struct stu boy1 = {102, "Zhang Ping", 'M', 78.5};
	boy2 = boy1;
	printf("Number=%d\nName=%s\n", boy2.num, boy2.name);
	printf("Sex=%c\nScore=%.1f\n", boy2.sex, boy2.score);
}
