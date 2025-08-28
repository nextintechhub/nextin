#include <stdio.h>

// Function to print the multiplication table of a number
void mul(int x) {
    printf("Multiplication table of %d:\n", x);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", x, i, x * i);
}

int main() {
    int x;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    // Call the function to print the multiplication table
    mul(x);

    return 0;
}