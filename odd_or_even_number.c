#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
        return 0;

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}
