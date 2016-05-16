#include <stdio.h>

int main(void)
{
/**
 * const point can move.
 * const point cant modify value.
 */

/*
 * int * const ptr1 means ptr1 is a pointer, it cannot point to other memory address;
 * const int * ptr1 means ptr1 is a pointer, it can point to const variable and move, it cannot modify value by itself.
 * const int * const ptr1 means... cant change anything.
 */
	const int arr1[] = {1, 2, 3};
	const int * ptr1 = arr1;
	printf("value of *ptr1=%d\n", *ptr1);
	ptr1++;
	printf("after ptr1++\n");
	printf("value of *ptr1=%d\n", *ptr1);
//	Error
//	*ptr1 *= 10;
//	printf("after *ptr1 *= 10;\n");
//	printf("value of *ptr1=%d\n", *ptr1);

	int arr2[] = {4, 5, 6};
	const int * ptr2 = arr2;
	printf("value of *ptr2=%d\n", *ptr2);
	printf("after ptr2++\n");
	ptr2++;
	printf("value of *ptr2=%d\n", *ptr2);
//	Error
//	printf("after *ptr1 *= 10;\n");
//	*ptr2 *= 10;
//	printf("value of *ptr2=%d\n", *ptr2);
	arr2[1] = 7;
	printf("after arr2[1]=7\n");
	printf("value of *ptr2=%d\n", *ptr2);

//	Error
//	const int arr3[] = {1, 2, 3};
//	int * ptr3 = arr3;

	int arr4[] = {10, 11, 12};
	int * const ptr4 = arr4;
	printf("value of *ptr4=%d\n", *ptr4);
//	Error
//	ptr4++;
	arr4[0] = 13;
	printf("after arr4[0]=13\n");
	printf("value of *ptr4=%d\n", *ptr4);
}
