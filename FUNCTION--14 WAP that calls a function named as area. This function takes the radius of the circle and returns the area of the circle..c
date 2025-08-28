#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
float area(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float radius;

    // Read the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate and print the area
    printf("The area of the circle is: %.2f\n", area(radius));

    return 0;
}