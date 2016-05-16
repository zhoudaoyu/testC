#include <stdio.h>
int main(void)
{
	int urn[5] = {100, 200, 300, 400, 500};

	int * ptr1, * ptr2, * ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	// ptr1 is the memory address of urn
	// *ptr1 is the value of urn[0]
	// &ptr1 is the memory address of ptr1(memory address of pointer)
	printf("value of ptr1 is %p, *ptr1 is %d, &ptr1 is %p\n", ptr1, *ptr1, &ptr1);

	printf("Adding an int to pointer: \n");
	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", (ptr1 + 4), *(ptr1 + 3));

	//after ptr1++
	//ptr1 is the memory address of urn[1]
	//*ptr1 is the value of urn[1]
	//&ptr1 is the memory address of ptr1, the value doesnt change.
	ptr1++;
	printf("value of ptr1++\n");
	printf("ptr1 is %p, *ptr1 is %d, &ptr1 is %p\n", ptr1, *ptr1, &ptr1);

	//after ptr2--
	//ptr2 is the memory address of urn[1]
	//*ptr2 is the value of urn[1]
	//&ptr2 is the memory address of ptr1, the value doesnt change.
	ptr2--;
	printf("value of ptr2--\n");
	printf("ptr2 is %p, *ptr2 is %d, &ptr2 is %p\n", ptr2, *ptr2, &ptr2);
	--ptr1;
	++ptr2;

	printf("ptr1 = %p, ptr2 = %p, ptr2 - ptr1 = %d, ptr2 -2 = %p\n", ptr1, ptr2, ptr2 - ptr1, ptr2 - 2);

}
