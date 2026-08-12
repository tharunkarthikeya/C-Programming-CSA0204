#include <stdio.h>

int main(void)
{
    double defectCount;

    if (scanf("%lf", &defectCount) != 1)
        return 0;

    double totalChips = 10000.0;
    double defectPercentage = (defectCount / totalChips) * 100.0;
    double acceptedChips = totalChips - defectCount;

    printf("Defect percentage: %.2f%%\n", defectPercentage);
    printf("Accepted chips: %.0f\n", acceptedChips);

    if (defectPercentage < 1.0)
        printf("Grade A\n");
    else if (defectPercentage <= 3.0)
        printf("Grade B\n");
    else if (defectPercentage <= 5.0)
        printf("Grade C\n");
    else
        printf("Reject Batch\n");

    for (int day = 1; day <= 30; day++) {
        if (day == 10) {
            printf("Day %d: Maintenance day skipped\n", day);
            continue;
        }
        if (day == 30) {
            printf("Day %d: Machine breakdown, stopping\n", day);
            break;
        }
        printf("Day %d: Production running\n", day);
    }

    return 0;
}
