// Count alphabets digits
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0;
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) alphabets++;
        else if (isdigit(str[i])) digits++;
    }
    printf("Alphabets: %d, Digits: %d\n", alphabets, digits);
    return 0;
}