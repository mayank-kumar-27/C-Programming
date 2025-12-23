// Void pointer
#include <stdio.h>

int main() {
    int x = 10;
    float y = 3.14;
    void *p;
    p = &x;
    printf("Int: %d\n", *(int*)p);
    p = &y;
    printf("Float: %.2f\n", *(float*)p);
    return 0;
}