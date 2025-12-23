// String rotation check
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}