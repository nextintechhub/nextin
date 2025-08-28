#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Accept a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the newline character

    // Find the length of the string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}