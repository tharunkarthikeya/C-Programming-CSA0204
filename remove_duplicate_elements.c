#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
        return 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int unique[100];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int value = arr[i];
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (unique[j] == value) {
                found = 1;
                break;
            }
        }
        if (!found)
            unique[uniqueCount++] = value;
    }

    printf("Array without duplicates:\n");
    for (int i = 0; i < uniqueCount; i++)
        printf("%d ", unique[i]);
    printf("\n");
    return 0;
}
