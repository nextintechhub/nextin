#include <stdio.h>

// Function to print the multiplication table of a number
void mul(int n) {
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

int main() {
    int n;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the multiplication table
    mul(n);

    return 0;
}