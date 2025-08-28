#include <stdio.h>

// Function to calculate the factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        // Calculate and print the factorial
        printf("The factorial of %d is: %lld\n", n, factorial(n));
    }

    return 0;
}