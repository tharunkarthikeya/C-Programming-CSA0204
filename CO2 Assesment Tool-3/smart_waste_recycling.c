#include <stdio.h>

int main(void)
{
    double recycled, total = 5000.0;

    if (scanf("%lf", &recycled) != 1)
        return 0;

    double percentage = (recycled / total) * 100.0;
    double remaining = total - recycled;

    printf("Recycled waste percentage: %.2f%%\n", percentage);
    printf("Remaining waste: %.2f kg\n", remaining);

    if (percentage >= 90.0)
        printf("Efficiency: Excellent\n");
    else if (percentage >= 75.0)
        printf("Efficiency: Good\n");
    else if (percentage >= 50.0)
        printf("Efficiency: Average\n");
    else
        printf("Efficiency: Poor\n");

    for (int day = 1; day <= 30; day++) {
        if (day == 10) {
            printf("Day %d: Maintenance day skipped\n", day);
            continue;
        }
        if (day == 30) {
            printf("Day %d: Machine failure, stopping processing\n", day);
            break;
        }
        printf("Day %d: Processing waste\n", day);
    }

    return 0;
}
