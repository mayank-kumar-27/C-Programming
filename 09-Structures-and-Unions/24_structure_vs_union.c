// Structure vs union
#include <stdio.h>

struct S {
    int i;
    char c;
};

union U {
    int i;
    char c;
};

int main() {
    printf("Struct size: %lu\n", sizeof(struct S));
    printf("Union size: %lu\n", sizeof(union U));
    return 0;
}