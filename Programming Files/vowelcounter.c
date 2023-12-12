// write a cprogram that scan a string and count no of vowels

#include <stdio.h>
#include <string.h>

int countVowels(const char *str) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; ++i) {
        char ch = str[i];
        // Check if the character is a vowel (case-insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    return count;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character at the end of the input
    input[strcspn(input, "\n")] = '\0';

    int vowelCount = countVowels(input);

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
