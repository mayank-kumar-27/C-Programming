// Structure initialization
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = {.y = 30, .x = 40};
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);
    return 0;
}