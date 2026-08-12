#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int start, end;
    if (scanf("%d %d", &start, &end) != 2)
        return 0;

    for (int num = start; num <= end; num++) {
        if (is_prime(num))
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
