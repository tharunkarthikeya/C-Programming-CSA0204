#include <stdio.h>

int main(void)
{
    double length, width;

    printf("Enter length and width of the rectangle: ");
    if (scanf("%lf %lf", &length, &width) != 2)
        return 0;

    double area = length * width;
    double perimeter = 2 * (length + width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
