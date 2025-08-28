#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;

    // Accept a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the newline character

    // Find the length of the string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Reverse the string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    printf("The reversed string is: %s\n", str);

    return 0;
}