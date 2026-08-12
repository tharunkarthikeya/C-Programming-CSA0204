#include <stdio.h>

int main(void)
{
    int n, positive = 0, negative = 0, zero = 0;

    printf("Enter number of values: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        if (value > 0)
            positive++;
        else if (value < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zero values: %d\n", zero);
    return 0;
}
