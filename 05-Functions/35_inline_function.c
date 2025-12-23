// Inline function
#include <stdio.h>

inline int square(int x) {
    return x * x;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Square: %d\n", square(n));
    return 0;
}