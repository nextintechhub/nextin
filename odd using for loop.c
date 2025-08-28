#include <stdio.h>

int main() {
    int sum = 0; 

    printf("Odd numbers from 1 to 51:\n");

    for (int i = 1; i <= 51; i++) 
    {
        if (i % 2 != 0) {
            printf("%d\n", i); 
            sum += i; 
        }
    }
    printf("\nSum of odd numbers from 1 to 51: %d\n", sum);

    return 0;
}
