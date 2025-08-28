#include <stdio.h>

// Function to convert character case
char convertCase(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;  // Convert to uppercase
    else if (ch >= 'A' && ch <= 'Z')
        return ch + 32;  // Convert to lowercase
    else
        return ch;  // Return as it is if not a letter
}

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert and print the character
    printf("The character in opposite case is: %c\n", convertCase(ch));

    return 0;
}