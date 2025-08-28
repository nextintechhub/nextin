#include <stdio.h>

int main() {
    // Declare and initialize variables
    int x = 5;
    int y = 11;
    int z = 18;

    // Perform the operation
    int result = 3 * x + 5 * y * z + (x / y) + x - (y * z);

    // Print the result
    printf("The result of the operation is: %d\n", result);

    return 0;
}