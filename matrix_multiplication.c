#include <stdio.h>

int main(void)
{
    int m, n, p;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter number of rows and columns for first matrix: ");
    if (scanf("%d %d", &m, &n) != 2)
        return 0;

    printf("Enter number of columns for second matrix: ");
    if (scanf("%d", &p) != 1)
        return 0;

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
