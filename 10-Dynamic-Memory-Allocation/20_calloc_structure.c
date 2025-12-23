// Calloc structure
#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y;
};

int main() {
    struct Point *p = (struct Point*)calloc(1, sizeof(struct Point));
    printf("x: %d, y: %d\n", p->x, p->y); // 0,0
    free(p);
    return 0;
}