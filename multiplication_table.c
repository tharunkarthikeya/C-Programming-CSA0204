#include <stdio.h>

int main(void)
{
    int n, limit;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
        return 0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &limit) != 1 || limit <= 0)
        return 0;

    printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= limit; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
