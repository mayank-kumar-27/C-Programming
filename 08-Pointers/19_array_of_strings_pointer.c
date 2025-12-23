// Array of strings pointer
#include <stdio.h>

int main() {
    char *arr[3] = {"Hello", "World", "C"};
    for (int i = 0; i < 3; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
    return 0;
}