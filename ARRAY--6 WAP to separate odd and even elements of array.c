#include <stdio.h>

int main() {
    int n, i;
    int array[100], odd[100], even[100];
    int odd_count = 0, even_count = 0;

    // Enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Separate odd and even elements
    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            even[even_count] = array[i];
            even_count++;
        } else {
            odd[odd_count] = array[i];
            odd_count++;
        }
    }

    // Print the original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // Print the odd elements
    printf("\nOdd elements: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    // Print the even elements
    printf("\nEven elements: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}