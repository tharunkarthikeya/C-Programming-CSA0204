#include <stdio.h>

int main(void)
{
    int plan;
    double used;

    if (scanf("%d %lf", &plan, &used) != 2)
        return 0;

    double capacity;
    switch (plan) {
        case 1: capacity = 100.0; break;
        case 2: capacity = 500.0; break;
        case 3: capacity = 2000.0; break;
        default:
            printf("Invalid plan\n");
            return 0;
    }

    double remaining = capacity - used;
    double usagePercent = (used / capacity) * 100.0;
    double extraCharge = 0.0;

    if (used > capacity)
        extraCharge = (used - capacity) * 4.0;

    printf("Used storage: %.2f GB\n", used);
    printf("Remaining storage: %.2f GB\n", remaining < 0 ? 0.0 : remaining);
    printf("Extra charges: %.2f\n", extraCharge);

    if (usagePercent > 95.0)
        printf("Warning: storage above 95%%\n");
    else
        printf("Status: Normal\n");

    for (int i = 1; i <= 20; i++) {
        if (i % 5 == 0) {
            printf("Customer %d: Inactive account skipped\n", i);
            continue;
        }
        if (i == 20) {
            printf("Customer %d: Server storage full, stopping\n", i);
            break;
        }
        printf("Customer %d: Processed\n", i);
    }

    return 0;
}
