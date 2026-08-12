#include <stdio.h>

int main(void)
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    printf("Enter two integers: ");
    if (scanf("%d %d", pa, pb) != 2)
        return 0;

    int sum = *pa + *pb;
    printf("Sum = %d\n", sum);

    return 0;
}
