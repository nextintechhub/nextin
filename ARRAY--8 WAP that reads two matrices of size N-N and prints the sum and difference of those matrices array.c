#include <stdio.h>

int main() {
    int n, i, j;
    int matrix1[100][100], matrix2[100][100], sum[100][100], difference[100][100];

    // Enter the size of the matrices
    printf("Enter the size of the matrices (N): ");
    scanf("%d", &n);

    // Enter the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Enter the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Calculate the difference of the matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Print the matrices
    printf("\nMatrix 1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Print the sum of the matrices
    printf("\nSum of the matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Print the difference of the matrices
    printf("\nDifference of the matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}