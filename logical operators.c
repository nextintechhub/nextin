#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter 1 for true or 0 for false (for first condition): ");
    scanf("%d", &a);
    printf("Enter 1 for true or 0 for false (for second condition): ");
    scanf("%d", &b);

    // Using logical operators directly in printf
    printf("Logical AND (a && b): %s\n", (a && b) ? "true" : "false");
    printf("Logical OR (a || b): %s\n", (a || b) ? "true" : "false");
    printf("Logical NOT (!a): %s\n", (!a) ? "true" : "false");
    printf("Logical NOT (!b): %s\n", (!b) ? "true" : "false");

    return 0;
}
