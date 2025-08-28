#include <stdio.h>
#include <math.h> // Include math.h for pow function

int main() {
    float a, b, sum, cube;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    
    printf("Enter the value of b: ");
    scanf("%f", &b);

    sum = a + b;

    cube = pow(sum, 3); // Alternatively, you can use sum * sum * sum

    printf("The cube of (%.2f + %.2f) is: %.2f\n", a, b, cube);

    return 0;
}