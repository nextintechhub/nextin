#include <stdio.h>

int main() {
    int myarray[15], i, sum = 0;
    float average;

    // Enter values in array
    printf("Enter 15 elements in the array:\n");
    for (i = 0; i < 15; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myarray[i]);
        sum += myarray[i]; // Calculate sum
    }

    // Calculate average
    average = (float)sum / 15;

    // Display the sum and average
    printf("\nSum of all elements: %d\n", sum);
    printf("Average of all elements: %.2f\n", average);

    return 0;
}