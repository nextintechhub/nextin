#include <stdio.h>
#include <math.h> // Include math.h for M_PI constant

int main() {
    // Declare a variable to hold the radius and area
    double radius, area;

    // Prompt the user for input
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle using the formula: area = p * r^2
    area = M_PI * radius * radius;

    // Display the result
    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}
