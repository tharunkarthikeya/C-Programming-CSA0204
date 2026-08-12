#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main(void)
{
    struct Rectangle rect;

    printf("Enter length: ");
    if (scanf("%f", &rect.length) != 1)
        return 0;

    printf("Enter width: ");
    if (scanf("%f", &rect.width) != 1)
        return 0;

    float area = rect.length * rect.width;
    float perimeter = 2 * (rect.length + rect.width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
