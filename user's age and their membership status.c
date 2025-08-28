#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char membership[20]; // Increased size to accommodate longer input

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Input membership status
    printf("Enter your membership status (member/non-member): ");
    scanf("%s", membership);

    // Initialize ticket price
    int ticketPrice = 0;

    // Determine ticket price using nested if-else
    if (strcmp(membership, "member") == 0) {
        if (age < 12) {
            ticketPrice = 5;
        } else if (age >= 12 && age <= 17) {
            ticketPrice = 10;
        } else {
            ticketPrice = 15;
        }
    } else if (strcmp(membership, "non-member") == 0) {
        if (age < 12) {
            ticketPrice = 10;
        } else if (age >= 12 && age <= 17) {
            ticketPrice = 15;
        } else {
            ticketPrice = 20;
        }
    } else {
        printf("Invalid membership status. Please enter 'member' or 'non-member'.\n");
        return 1; // Exit with error
    }

    // Output the ticket price
    printf("The ticket price is: $%d\n", ticketPrice);
    return 0;
}
