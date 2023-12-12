#include <stdio.h>

int countUpperCaseLetters(char *str) {
    int count = 0;

    // Iterate through each character in the string
    while (*str != '\0') {
        // Check if the current character is an uppercase letter
        if (*str >= 'A' && *str <= 'Z') {
            count++;
        }

        // Move to the next character in the string
        str++;
    }

    return count;
}

int main() {
    char inputString[100];

    // Get input from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from input
    for (int i = 0; i < sizeof(inputString); i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
            break;
        }
    }

    // Call the function to count uppercase letters
    int result = countUpperCaseLetters(inputString);

    // Display the result
    printf("Number of uppercase letters: %d\n", result);

    return 0;
}

