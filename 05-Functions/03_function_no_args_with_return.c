// Function no args with return
#include <stdio.h>

int getNumber() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int num = getNumber();
    printf("You entered: %d\n", num);
    return 0;
}