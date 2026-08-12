#include <stdio.h>

int main(void)
{
    int marks;

    if (scanf("%d", &marks) != 1)
        return 0;

    if (marks >= 90 && marks <= 100)
        printf("Grade A\n");
    else if (marks >= 80 && marks <= 89)
        printf("Grade B\n");
    else if (marks >= 70 && marks <= 79)
        printf("Grade C\n");
    else if (marks >= 60 && marks <= 69)
        printf("Grade D\n");
    else if (marks >= 0 && marks < 60)
        printf("Grade F\n");
    else
        printf("Invalid marks\n");

    return 0;
}
