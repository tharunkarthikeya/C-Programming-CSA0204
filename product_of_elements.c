#include <stdio.h>

int main(void)
{
    int n;
    long long product = 1;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        product *= value;
    }

    printf("Product of elements = %lld\n", product);
    return 0;
}
