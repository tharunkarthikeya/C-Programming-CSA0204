#include <stdio.h>

struct Student {
    int id;
    char name[100];
    int age;
    float grade;
};

int main(void)
{
    struct Student student;

    printf("Enter student id: ");
    if (scanf("%d", &student.id) != 1)
        return 0;

    getchar();
    printf("Enter student name: ");
    if (fgets(student.name, sizeof(student.name), stdin) == NULL)
        return 0;

    size_t len = strlen(student.name);
    if (len > 0 && student.name[len - 1] == '\n')
        student.name[len - 1] = '\0';

    printf("Enter student age: ");
    if (scanf("%d", &student.age) != 1)
        return 0;

    printf("Enter student grade: ");
    if (scanf("%f", &student.grade) != 1)
        return 0;

    printf("\nStudent Details:\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Grade: %.2f\n", student.grade);

    return 0;
}
