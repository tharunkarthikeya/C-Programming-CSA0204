#include <stdio.h>

int main(void)
{
    unsigned int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n) != 1)
        return 0;

    for (unsigned int i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial of %u = %llu\n", n, factorial);
    return 0;
}
