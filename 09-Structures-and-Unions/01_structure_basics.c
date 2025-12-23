// Structure basics
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p;
    p.x = 10;
    p.y = 20;
    printf("Point: (%d, %d)\n", p.x, p.y);
    return 0;
}