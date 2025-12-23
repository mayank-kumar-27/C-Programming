// Program to check if two strings are anagrams.
#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Check if anagrams
    if (strcmp(str1, str2) == 0) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}