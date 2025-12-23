// Wild pointer
#include <stdio.h>

int main() {
    int *p; // uninitialized, wild
    printf("Wild pointer\n");
    return 0;
}