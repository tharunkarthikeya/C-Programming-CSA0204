#include <stdio.h>

int main(void)
{
    int limit;
    int sum = 0;
    int a = 0, b = 1;

    printf("Enter the number of Fibonacci terms: ");
    if (scanf("%d", &limit) != 1 || limit <= 0)
        return 0;

    for (int i = 1; i <= limit; i++) {
        int next = a + b;
        a = b;
        b = next;

        if (a % 2 == 0)
            sum += a;
    }

    printf("Sum of even Fibonacci terms = %d\n", sum);
    return 0;
}
