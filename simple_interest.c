#include <stdio.h>

int main(void)
{
    double principal, rate, time;

    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1)
        return 0;

    printf("Enter annual rate of interest (%%): ");
    if (scanf("%lf", &rate) != 1)
        return 0;

    printf("Enter time in years: ");
    if (scanf("%lf", &time) != 1)
        return 0;

    double simpleInterest = (principal * rate * time) / 100.0;
    printf("Simple interest = %.2f\n", simpleInterest);
    return 0;
}
