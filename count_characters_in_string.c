#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[1000];

    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL)
        return 0;

    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n')
        input[--length] = '\0';

    printf("Number of characters: %zu\n", length);
    return 0;
}
