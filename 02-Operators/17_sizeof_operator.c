// Sizeof operator
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Size of int: %zu\n", sizeof(num));
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of float: %zu\n", sizeof(float));
    return 0;
}