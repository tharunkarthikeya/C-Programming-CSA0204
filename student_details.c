#include <stdio.h>

int main(void)
{
    char name[100];
    char reg_no[50];
    int marks1, marks2, marks3;
    double average;

    printf("Enter registration number: ");
    if (scanf("%49s", reg_no) != 1)
        return 0;
    getchar();

    printf("Enter student name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
        return 0;
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    printf("Enter marks for three subjects: ");
    if (scanf("%d %d %d", &marks1, &marks2, &marks3) != 3)
        return 0;

    average = (marks1 + marks2 + marks3) / 3.0;
    printf("\nStudent Details:\n");
    printf("Registration No: %s\n", reg_no);
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", marks1 + marks2 + marks3);
    printf("Average Marks: %.2f\n", average);
    return 0;
}
