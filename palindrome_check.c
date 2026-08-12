#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[1000];
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 0;

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
        text[--len] = '\0';

    int left = 0, right = len - 1;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)text[left]))
            left++;
        while (left < right && !isalnum((unsigned char)text[right]))
            right--;
        if (tolower((unsigned char)text[left]) != tolower((unsigned char)text[right])) {
            printf("Not a palindrome.\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("The string is a palindrome.\n");
    return 0;
}
