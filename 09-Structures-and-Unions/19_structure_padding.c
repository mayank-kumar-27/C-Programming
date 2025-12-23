// Structure padding
#include <stdio.h>

struct Test {
    char c;    // 1 byte
    int i;     // 4 bytes, padding added
};

int main() {
    printf("Size: %lu\n", sizeof(struct Test));
    return 0;
}