#include <stdio.h>

int main(void)
{
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3)
        return 0;

    int largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    printf("Largest = %d\n", largest);
    return 0;
}
