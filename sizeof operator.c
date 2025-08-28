#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;
    
    // Using sizeof with variables
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));

    // Using sizeof with data types directly
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    // Using sizeof with arrays
    int arr[10];
    printf("Size of array of 10 integers: %zu bytes\n", sizeof(arr));
    printf("Size of one element of the array: %zu bytes\n", sizeof(arr[0]));
    printf("Number of elements in the array: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
