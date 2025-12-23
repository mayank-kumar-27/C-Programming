// Structure returning function
#include <stdio.h>

struct Point {
    int x, y;
};

struct Point createPoint(int a, int b) {
    struct Point p;
    p.x = a;
    p.y = b;
    return p;
}

int main() {
    int a, b;
    printf("Enter x and y: ");
    scanf("%d %d", &a, &b);
    struct Point p = createPoint(a, b);
    printf("Point: (%d, %d)\n", p.x, p.y);
    return 0;
}