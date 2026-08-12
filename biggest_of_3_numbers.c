#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3)
        return 0;

    int biggest = a;
    if (b > biggest)
        biggest = b;
    if (c > biggest)
        biggest = c;

    printf("Biggest number = %d\n", biggest);
    return 0;
}
