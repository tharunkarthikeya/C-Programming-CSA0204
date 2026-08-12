#include <stdio.h>

int main(void)
{
    int choice;
    double a, b;

    if (scanf("%d", &choice) != 1)
        return 0;

    if (choice < 1 || choice > 4)
        return 0;

    if (scanf("%lf %lf", &a, &b) != 2)
        return 0;

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if (b == 0.0)
                printf("Division by zero error\n");
            else
                printf("Result = %.2f\n", a / b);
            break;
    }

    return 0;
}
