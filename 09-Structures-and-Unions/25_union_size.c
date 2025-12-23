// Union size
#include <stdio.h>

union Data {
    int i;
    double d;
    char c[10];
};

int main() {
    printf("Union size: %lu\n", sizeof(union Data));
    return 0;
}