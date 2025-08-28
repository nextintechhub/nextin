#include <stdio.h>

// Function to calculate the sum of natural numbers from 1 to n
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate and print the sum
    printf("The sum of natural numbers from 1 to %d is: %d\n", n, sumOfNaturalNumbers(n));

    return 0;
}