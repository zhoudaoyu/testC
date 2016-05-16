#include <stdio.h>
int main(void)
{
	int arr[2][2] = {1, 2, 3, 4};
	printf("arr = %p, arr[0] = %p, &arr[0][0] = %p\n", arr, arr[0], &arr[0][0]);
}
