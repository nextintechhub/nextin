#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle large results

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1; // Initialize counter
        while (i <= number) {
            factorial *= i; // Multiply factorial by the current counter
            i++; // Increment counter
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}