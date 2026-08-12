#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    char department[100];
    float salary;
};

int main(void)
{
    struct Employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        if (scanf("%d", &employees[i].id) != 1)
            return 0;
        getchar();

        printf("Name: ");
        if (fgets(employees[i].name, sizeof(employees[i].name), stdin) == NULL)
            return 0;
        size_t len = strlen(employees[i].name);
        if (len > 0 && employees[i].name[len - 1] == '\n')
            employees[i].name[len - 1] = '\0';

        printf("Department: ");
        if (fgets(employees[i].department, sizeof(employees[i].department), stdin) == NULL)
            return 0;
        len = strlen(employees[i].department);
        if (len > 0 && employees[i].department[len - 1] == '\n')
            employees[i].department[len - 1] = '\0';

        printf("Salary: ");
        if (scanf("%f", &employees[i].salary) != 1)
            return 0;
        getchar();
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
