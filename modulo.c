#include <stdio.h>

int main() {
    // Declare variables to hold the input numbers
    double num1, num2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic operations
    double addition = num1 + num2;
    double subtraction = num1 - num2;
    double multiplication = num1 * num2;
    double division;
    int modulo;

    // Check for division and modulo by zero
    if (num2 != 0) {
        division = num1 / num2;
        modulo = (int)num1 % (int)num2; // Cast to int for modulo
    } else {
        printf("Division and modulo by zero are undefined.\n");
        return 1; // Exit the program with an error code
    }

    // Display the results
    printf("Addition: %.2lf\n", addition);
    printf("Subtraction: %.2lf\n", subtraction);
    printf("Multiplication: %.2lf\n", multiplication);
    printf("Division: %.2lf\n", division);
    printf("Modulo: %d\n", modulo); // Display as integer

    return 0;
}
