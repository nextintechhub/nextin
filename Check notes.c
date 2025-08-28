/*

Question 5: Check Notes

How does the program determine the number of notes required for a given amount?
What denominations of notes does the program consider?

*/


#include<stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes_1000 = amount / 1000;
    amount %= 1000;

    int notes_500 = amount / 500;
    amount %= 500;

    int notes_100 = amount / 100;
    amount %= 100;

    int notes_50 = amount / 50;
    amount %= 50;

    int notes_20 = amount / 20;
    amount %= 20;

    int notes_10 = amount / 10;
    amount %= 10;

    int notes_5 = amount / 5;
    amount %= 5;

    int notes_2 = amount / 2;
    amount %= 2;

    int notes_1 = amount; // Remaining amount is the number of 1rs notes

    // Display the result
    printf("Notes required:\n");
    printf("1000 Rs notes: %d\n", notes_1000);
    printf("500 Rs notes: %d\n", notes_500);
    printf("100 Rs notes: %d\n", notes_100);
    printf("50 Rs notes: %d\n", notes_50);
    printf("20 Rs notes: %d\n", notes_20);
    printf("10 Rs notes: %d\n", notes_10);
    printf("5 Rs notes: %d\n", notes_5);
    printf("2 Rs notes: %d\n", notes_2);
    printf("1 Rs notes: %d\n", notes_1);

    return 0;
}
