#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    int digit_count = 0, uppercase_count = 0, lowercase_count = 0;

    // Accept a line of text from the user
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the newline character

    // Count the number of digits, uppercase, and lowercase characters
    while (*ptr != '\0') {
        if (*ptr >= '0' && *ptr <= '9') {
            digit_count++;
        } else if (*ptr >= 'A' && *ptr <= 'Z') {
            uppercase_count++;
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            lowercase_count++;
        }
        ptr++;
    }

    // Print the results
    printf("Number of digits: %d\n", digit_count);
    printf("Number of uppercase characters: %d\n", uppercase_count);
    printf("Number of lowercase characters: %d\n", lowercase_count);

    return 0;
}