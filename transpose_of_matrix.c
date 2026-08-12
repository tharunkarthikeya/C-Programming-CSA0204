#include <stdio.h>

int main(void)
{
    int rows, cols;
    int matrix[10][10], transpose[10][10];

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2)
        return 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
