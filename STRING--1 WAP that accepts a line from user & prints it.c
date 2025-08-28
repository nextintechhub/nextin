#include <stdio.h>

int main() {
    char str[100];

    // Accept a line from the user
    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);

    // Print the line
    printf("You entered: %s", str);

    return 0;
}