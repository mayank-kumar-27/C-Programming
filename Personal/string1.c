#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *token;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets
    str[strcspn(str, "\n")] = 0;

    printf("Initial letters of each word: ");

    // Use strtok to split the string into words
    token = strtok(str, " ");
    while (token != NULL) {
        printf("%c", token[0]);  // Print the first character of each word
        token = strtok(NULL, " ");
    }

    printf("\n");

    return 0;
}

