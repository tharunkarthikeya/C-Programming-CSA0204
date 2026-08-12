#include <stdio.h>
#include <math.h>

int main(void)
{
    int number, original, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
        return 0;

    original = number < 0 ? -number : number;
    int temp = original;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = original;
    while (temp != 0) {
        remainder = temp % 10;
        result += (int)pow(remainder, digits);
        temp /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
