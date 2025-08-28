#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, length, flag = 1;

    // Accept a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the newline character

    // Find the length of the string
    length = strlen(str);

    // Check if the string is a palindrome
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    // Print the result
    if (flag == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}