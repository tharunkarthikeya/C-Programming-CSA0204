#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int sum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
