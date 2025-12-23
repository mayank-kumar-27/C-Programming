// String compare
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    int res = strcmp(str1, str2);
    if (res == 0) {
        printf("Equal\n");
    } else if (res < 0) {
        printf("First is smaller\n");
    } else {
        printf("First is larger\n");
    }
    return 0;
}