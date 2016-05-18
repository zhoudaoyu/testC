#include <stdio.h>

int main(void)
{
	//测试结果能编译，但不能执行
	char * p1 = "Klingon";
	p1[0] = "F";
	printf("Klingon");
}
