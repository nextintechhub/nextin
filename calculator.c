#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Taking input from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline

    // Performing the operation using nested if-else statements
    if (operator == '+') {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
