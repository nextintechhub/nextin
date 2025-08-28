#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int matrix1[100][100], matrix2[100][100], product[100][100];

    // Enter the dimensions of the first matrix
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &m);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &n);

    // Enter the dimensions of the second matrix
    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &p);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &q);

    // Check if the matrices can be multiplied
    if (n != p) {
        printf("Error! Matrices cannot be multiplied.\n");
        return 1;
    }

    // Enter the elements of the first matrix
    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Enter the elements of the second matrix
    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the product of the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            product[i][j] = 0;
            for (k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the matrices
    printf("\nMatrix 1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Print the product of the matrices
    printf("\nProduct of the matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}