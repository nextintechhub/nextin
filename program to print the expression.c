#include <stdio.h>

int main() {
    // Declare variables for x, y, z
    float x, y, z, result;

    // Prompt user for input
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);

    // Calculate the result of the expression
    // Ensure to handle division by zero
    if (y != 0) {
        result = 3 * x + 5 * y * z + (x / y) + (x - y * z);
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Print the result
    printf("The result of the expression 3x + 5yz + (x/y) + (x - yz) is: %.2f\n", result);

    return 0; // Exit the program successfully
}