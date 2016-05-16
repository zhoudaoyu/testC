#include <stdio.h>

int main(void)
{
    long x = 5L;
    printf("%d is ", sizeof(long));
    printf("%d and ", sizeof(++x)); // note 1
    printf("%d\n", x); // note 2
    return 0;
}
