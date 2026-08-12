#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2)
        return 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        if (value < smallest) {
            second_smallest = smallest;
            smallest = value;
        } else if (value < second_smallest && value != smallest) {
            second_smallest = value;
        }
    }

    if (second_smallest == INT_MAX)
        printf("No distinct second smallest value found.\n");
    else
        printf("Second smallest element = %d\n", second_smallest);

    return 0;
}
