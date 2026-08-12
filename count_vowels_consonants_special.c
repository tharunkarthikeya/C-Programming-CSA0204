#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[1000];
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 0;

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (ch != '\n' && ch != '\r' && ch != '\0') {
            special++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}
