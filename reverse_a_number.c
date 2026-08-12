#include <stdio.h>

int main(void)
{
    int number;
    int reversed = 0;
    int sign = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
        return 0;

    if (number < 0) {
        sign = -1;
        number = -number;
    }

    while (number > 0) {
        reversed = reversed * 10 + (number % 10);
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed * sign);
    return 0;
}
