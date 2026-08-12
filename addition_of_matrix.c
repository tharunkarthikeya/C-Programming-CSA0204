#include <stdio.h>

int main(void)
{
    int rows, cols;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2)
        return 0;

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
