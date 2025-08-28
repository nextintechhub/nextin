#include <stdio.h>

void display_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    display_pattern(number); 
}