// Global local scope
#include <stdio.h>

int global = 10;

void func() {
    int local = 20;
    printf("Global: %d, Local: %d\n", global, local);
}

int main() {
    func();
    printf("Global: %d\n", global);
    return 0;
}