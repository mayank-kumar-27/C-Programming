// Bit fields
#include <stdio.h>

struct BitField {
    unsigned int a : 1;
    unsigned int b : 2;
    unsigned int c : 3;
};

int main() {
    struct BitField bf;
    bf.a = 1;
    bf.b = 3;
    bf.c = 7;
    printf("a: %u, b: %u, c: %u\n", bf.a, bf.b, bf.c);
    printf("Size: %lu\n", sizeof(struct BitField));
    return 0;
}