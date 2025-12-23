// Structure function reference
#include <stdio.h>

struct Point {
    int x, y;
};

void modifyPoint(struct Point *p) {
    p->x += 10;
    p->y += 10;
}

int main() {
    struct Point p = {1, 2};
    modifyPoint(&p);
    printf("Modified: (%d, %d)\n", p.x, p.y);
    return 0;
}