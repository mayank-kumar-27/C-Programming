// Pointer as argument
#include <stdio.h>

void modify(int *p) {
    *p = 100;
}

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    modify(&x);
    printf("Modified: %d\n", x);
    return 0;
}