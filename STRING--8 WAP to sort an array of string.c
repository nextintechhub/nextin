#include <stdio.h>
#include <string.h>

int main() {
    char str[100][100];
    int n, i, j;
    char temp[100];

    // Accept the number of strings from the user
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Accept the strings from the user
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf("%s", str[i]);
    }

    // Sort the strings
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Print the sorted strings
    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}