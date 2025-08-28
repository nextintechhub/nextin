#include <stdio.h>

int main() {
    int n, i, j, temp;
    int array[100];

    // Enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print the original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // Sort the array
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}