#include <stdio.h>

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2)
        return 0;

    printf("Addition: %.2f\n", a + b);
    printf("Subtraction: %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);
    if (b != 0.0)
        printf("Division: %.2f\n", a / b);
    else
        printf("Division: undefined (division by zero)\n");

    return 0;
}
