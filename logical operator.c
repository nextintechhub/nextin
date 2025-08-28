#include <stdio.h>

int main() {
    // Declare variables to hold the input numbers
    int num1, num2, num3;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Perform logical operations and display the results
    printf("num1 != num2: %d\n", num1 != num2); // Not equal to
    printf("num1 && num2: %d\n", num1 && num2); // Logical AND
    printf("num1 || num3: %d\n", num1 || num3); // Logical OR
    printf("num2 && num3: %d\n", num2 && num3); // Logical AND
    printf("num1 || num2 || num3: %d\n", num1 || num2 || num3); // Logical OR for all three

    return 0;
}
