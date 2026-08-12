#include <stdio.h>

int main(void)
{
    int n, matrix[10][10], sum = 0;

    printf("Enter matrix size (n x n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10)
        return 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++)
        sum += matrix[i][i];

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
