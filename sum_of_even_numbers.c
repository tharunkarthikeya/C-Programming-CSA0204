#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Enter how many numbers: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        if (value % 2 == 0)
            sum += value;
    }

    printf("Sum of even numbers = %d\n", sum);
    return 0;
}
