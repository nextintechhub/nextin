#include <stdio.h>

int main() {
    // Declare variables to hold the length and width of the rectangle
    double length, width, area;

    // Prompt the user for input
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Display the result
    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;
}
