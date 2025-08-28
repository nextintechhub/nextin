#include <stdio.h>

// Function to print name 'n' times
void printName(int n) {
    for (int i = 0; i < n; i++)
        printf("Your Name\n");
}

int main() {
    int n;

    // Read the number from the user
    printf("Enter the number of times to print your name: ");
    scanf("%d", &n);

    // Print the name 'n' times
    printf("Enter your name: ");
    char name[20];
    scanf("%s", name);
    printf("Your name printed %d times:\n", n);
    for (int i = 0; i < n; i++)
        printf("%s\n", name);

    return 0;
}