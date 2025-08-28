#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];

    // Accept the first string from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove the newline character

    // Accept the second string from the user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove the newline character

    // Copy the first string to str3
    strcpy(str3, str1);

    // Join the two strings using strcat()
    strcat(str3, str2);

    // Display the result
    printf("The joined string is: %s\n", str3);

    return 0;
}