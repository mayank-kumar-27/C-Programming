// Structure size
#include <stdio.h>

struct Test {
    char c;
    int i;
    double d;
};

int main() {
    printf("Size of struct: %lu\n", sizeof(struct Test));
    return 0;
}