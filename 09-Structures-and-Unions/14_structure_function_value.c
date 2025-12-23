// Structure function value
#include <stdio.h>

struct Point {
    int x, y;
};

struct Point addPoints(struct Point p1, struct Point p2) {
    struct Point sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;
    return sum;
}

int main() {
    struct Point p1 = {1, 2}, p2 = {3, 4};
    struct Point sum = addPoints(p1, p2);
    printf("Sum: (%d, %d)\n", sum.x, sum.y);
    return 0;
}