// Storage class extern
#include <stdio.h>

extern int globalVar;

int main() {
    printf("Extern globalVar: %d\n", globalVar);
    return 0;
}

int globalVar = 20;