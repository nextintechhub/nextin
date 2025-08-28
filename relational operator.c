#include <stdio.h>

int main() {
    // Declare variables to hold the input numbers
    double num1, num2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform relational operations and display the results
    printf("num1 < num2: %d\n", num1 < num2);   // Less than
    printf("num1 <= num2: %d\n", num1 <= num2); // Less than or equal to
    printf("num1 > num2: %d\n", num1 > num2);   // Greater than
    printf("num1 == num2: %d\n", num1 == num2); // Equal to
    printf("num1 != num2: %d\n", num1 != num2); // Not equal to

    return 0;
}
