#include <stdio.h>
struct stu
{
	int num;
	char * name;
	char sex;
	float score;
};

int main(void)
{
	struct stu boy1, boy2;
	boy1.num = 102;
	boy1.name = "zhang ping";
	printf("input sex and score\n");
	scanf("%c %f", &boy1.sex, &boy1.score);
	boy2 = boy1;
	printf("Number = %d\nName = %s\n", boy2.num, boy2.name);
	printf("Sex = %c\nScore = %f\n", boy2.sex, boy2.score);
	return 0;
}
