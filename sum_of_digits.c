#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
        return 0;

    int temp = number < 0 ? -number : number;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
