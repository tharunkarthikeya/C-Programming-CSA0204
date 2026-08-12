#include <stdio.h>

int main(void)
{
    int number;
    if (scanf("%d", &number) != 1)
        return 0;

    int original = number;
    int sum = 0;
    int digit;

    do {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    } while (number != 0);

    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
