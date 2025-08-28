#include <stdio.h>

int main() {
    char str[100];
    int i, word_count = 0, char_count = 0;

    // Accept a line of text from the user
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the newline character

    // Count the number of words and characters
    for (i = 0; str[i] != '\0'; i++) {
        char_count++;
        if (str[i] == ' ' && str[i + 1] != ' ') {
            word_count++;
        }
    }

    // Increment the word count for the last word
    if (str[i - 1] != ' ') {
        word_count++;
    }

    // Print the results
    printf("Number of words: %d\n", word_count);
    printf("Number of characters: %d\n", char_count);

    return 0;
}