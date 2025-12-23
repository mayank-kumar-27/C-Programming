// Highest frequency character
#include <stdio.h>

int main() {
    char str[100], maxChar;
    int freq[256] = {0}, maxFreq = 0;
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    printf("Highest frequency char: %c (%d)\n", maxChar, maxFreq);
    return 0;
}