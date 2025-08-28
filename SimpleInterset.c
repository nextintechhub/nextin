#include <stdio.h>

int main() {
    float principal, rate, simpleInterest;
    int years;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    simpleInterest = (principal * years * rate) / 100;

    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}