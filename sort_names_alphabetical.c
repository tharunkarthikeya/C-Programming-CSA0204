#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char names[50][100];
    char temp[100];

    printf("Enter number of names: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 50)
        return 0;
    getchar();

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n')
            names[i][len - 1] = '\0';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}
