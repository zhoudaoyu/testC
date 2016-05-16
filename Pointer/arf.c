#include <stdio.h>
#define SIZE 5
// const means arr[] cant be modified.
void show_array(const int arr[], int n);
void modify_array(int arr[], int n, int multi);

int main(void)
{
	int myArray[SIZE] = {1, 2, 3, 4, 5};
	printf("Before modify:\n");
	show_array(myArray, SIZE);
	modify_array(myArray, SIZE, 2);
	printf("After modify:\n");
	show_array(myArray, SIZE);
}

void show_array(const int arr[], int n)
{
	int i;
	for (i = 0; i < n ; i++)
	{
		printf("value of arr[%d] is %d\n", i, arr[i]);
	}
}

void modify_array(int arr[], int n, int multi)
{
	int i;
	for (i = 0; i < n ; i++)
	{
		*(arr + i) *= multi;
	}
}
