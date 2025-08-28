#include <stdio.h>

// No argument and no return value function
void readInput() {
    int l, b, h;
    printf("Enter length, breadth and height of the rectangle: ");
    scanf("%d %d %d", &l, &b, &h);
    printf("Volume of the rectangle is: %d\n", l * b * h);
}

// No argument but return value function
int calculateVolume() {
    int l, b, h;
    printf("Enter length, breadth and height of the rectangle: ");
    scanf("%d %d %d", &l, &b, &h);
    return l * b * h;
}

// Argument but no return value function
void printVolume(int l, int b, int h) {
    printf("Volume of the rectangle is: %d\n", l * b * h);
}

// Argument and return value function
int volume(int l, int b, int h) {
    return l * b * h;
}

int main() {
    int choice;
    printf("Choose a function type:\n1. No argument and no return value\n2. No argument but return value\n3. Argument but no return value\n4. Argument and return value\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            readInput();
            break;
        case 2:
            printf("Volume of the rectangle is: %d\n", calculateVolume());
            break;
        case 3:
            int l, b, h;
            printf("Enter length, breadth and height of the rectangle: ");
            scanf("%d %d %d", &l, &b, &h);
            printVolume(l, b, h);
            break;
        case 4:
            int l, b, h;
            printf("Enter length, breadth and height of the rectangle: ");
            scanf("%d %d %d", &l, &b, &h);
            printf("Volume of the rectangle is: %d\n", volume(l, b, h));
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}