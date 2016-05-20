#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#define SIZE 3

struct stu
{
	int num;
	int age;
	struct stu * next;
};

int main(void)
{
	struct stu * head, * before, * after;
	int i;
	for (i = 0; i < SIZE; i++)
	{
		after = (struct stu *)malloc(sizeof(struct stu));
		printf("Please input the %d man information:\n");
		scanf("%d, %d", &after->age, &after->num);
		if(i == 0)
		{
			head = before = after;
		}else
		{
			before->next = after;
			after->next = NULL;
			before = after;
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("head.age = %d, head.num = %d\n", head->age, head->num);
		head = head->next;
	}
	return 0;
}
