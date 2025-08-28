#include <stdio.h>

int main() 
{
    float amount, convertedAmount;
    float exchangeRate = 132.0; 

    printf("Enter the amount in USD: ");
    scanf("%f", &amount);

    convertedAmount = amount * exchangeRate;

    printf("The amount in Nepali Rupees (NPR) is: %.2f\n", convertedAmount);

    return 0;
}