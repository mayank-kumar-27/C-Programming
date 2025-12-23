// Sort string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    printf("Enter string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted: %s\n", str);
    return 0;
}