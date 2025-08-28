#include <stdio.h>

int main() {
    int array[10], i, largest, smallest;

    // Enter values in array
    printf("Enter 10 elements in the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Initialize largest and smallest with first element
    largest = array[0];
    smallest = array[0];

    // Find largest and smallest element
    for (i = 1; i < 10; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    // Display the largest and smallest element
    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}