#include <stdio.h>

// Function to find the largest number
int findLargest(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main() {
    int num1, num2;

    // Read two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find and print the largest number
    printf("The largest number is: %d\n", findLargest(num1, num2));

    return 0;
}