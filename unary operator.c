#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // Using the increment operator
    printf("Original value of a: %d\n", a);
    printf("Value of a after increment: %d\n", ++a); // Pre-increment

    // Using the decrement operator
    printf("Original value of b: %d\n", b);
    printf("Value of b after decrement: %d\n", --b); // Pre-decrement

    // Using unary minus
    int c = -a; // Negating the value of a
    printf("Negated value of a: %d\n", c);

    // Using logical NOT
    int isTrue = 1; // 1 represents true
    printf("Logical NOT of isTrue: %d\n", !isTrue); // Inverts to false (0)

    // Using bitwise NOT
    int d = 5; // Binary: 0000 0101
    printf("Bitwise NOT of d: %d\n", ~d); // Inverts bits

    return 0;
}
