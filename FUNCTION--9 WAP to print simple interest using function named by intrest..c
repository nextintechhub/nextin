#include <stdio.h>

// Function to calculate interest
float interest(float principal, int years, float rate) {
    return (principal * years * rate) / 100;
}

int main() {
    float principal, rate;
    int years;

    // Input values from user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter number of years: ");
    scanf("%d", &years);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    // Call interest function and print result
    printf("Calculated interest: %.2f\n", interest(principal, years, rate));

    return 0;
}