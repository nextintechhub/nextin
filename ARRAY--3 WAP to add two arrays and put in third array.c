#include <stdio.h>

int main() {
    int array1[5], array2[5], array3[5], i;

    // Enter values in array1
    printf("Enter 5 elements in array1:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Enter values in array2
    printf("\nEnter 5 elements in array2:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Add array1 and array2 and store in array3
    printf("\nAdding array1 and array2...\n");
    for (i = 0; i < 5; i++) {
        array3[i] = array1[i] + array2[i];
    }

    // Display the arrays
    printf("\nArray1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
    }

    printf("\nArray2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }

    printf("\nArray3 (Array1 + Array2): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array3[i]);
    }

    return 0;
}