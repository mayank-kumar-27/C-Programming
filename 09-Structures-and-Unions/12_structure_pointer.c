// Structure pointer
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p = {10, 20};
    struct Point *ptr = &p;
    printf("x: %d, y: %d\n", ptr->x, ptr->y);
    return 0;
}