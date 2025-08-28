#include <stdio.h>

int main() {
    int age;
    float amount_paid;

    // Input from the user
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter the amount you have paid: ");
    scanf("%f", &amount_paid);

    // Check eligibility
    if (age > 16 && amount_paid > 5000) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
