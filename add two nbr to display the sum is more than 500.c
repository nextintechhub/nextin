/*  

Question 1: Add Two Numbers to Display the Sum is More Than 500

What will the program output if the sum of the two input numbers is greater than 500?
How does the program handle the case when the sum is 500 or less?

  */



#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Check if the sum is greater than 500
    if (sum > 500) {
        printf("The sum is: %d\n", sum);
    } else {
        printf("The sum is 500 or less.\n");
    }

    return 0;
}
