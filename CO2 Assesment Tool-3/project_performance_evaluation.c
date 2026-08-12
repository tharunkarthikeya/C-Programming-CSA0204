#include <stdio.h>

int main(void)
{
    int quality, delay;
    int totalQuality = 0;
    int count = 0;

    for (int project = 1; project <= 20; project++) {
        if (scanf("%d %d", &quality, &delay) != 2)
            break;

        if (quality == -1)
            break;
        if (quality < 0)
            continue;

        totalQuality += quality;
        count++;

        if (quality >= 90 && delay <= 2)
            printf("Project %d: Excellent\n", project);
        else if (quality >= 75 && delay <= 5)
            printf("Project %d: Good\n", project);
        else if (quality >= 60)
            printf("Project %d: Average\n", project);
        else
            printf("Project %d: Needs Improvement\n", project);
    }

    if (count > 0)
        printf("Average quality score = %.2f\n", (double)totalQuality / count);
    return 0;
}
