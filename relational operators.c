#include <stdio.h>

int main() {
    float num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Using relational operators directly in printf
    printf("%.2f is greater than %.2f: %s\n", num1, num2, (num1 > num2) ? "true" : "false");
    printf("%.2f is less than %.2f: %s\n", num1, num2, (num1 < num2) ? "true" : "false");
    printf("%.2f is equal to %.2f: %s\n", num1, num2, (num1 == num2) ? "true" : "false");

    return 0;
}
