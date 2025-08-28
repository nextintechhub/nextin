#include <stdio.h>

int main() {
    int myarray[15], i;

    // Enter values in array
    printf("Enter 15 elements in the array:\n");
    for (i = 0; i < 15; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myarray[i]);
    }

    // Display the elements of array
    printf("\nElements of the array are:\n");
    for (i = 0; i < 15; i++) {
        printf("Element %d: %d\n", i + 1, myarray[i]);
    }

    return 0;
}