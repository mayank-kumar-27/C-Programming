// Typedef structure
#include <stdio.h>

typedef struct {
    int x, y;
} Point;

int main() {
    Point p = {10, 20};
    printf("Point: (%d, %d)\n", p.x, p.y);
    return 0;
}