#include <stdio.h>

int main() {

    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 100.0 / 180.0;

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}