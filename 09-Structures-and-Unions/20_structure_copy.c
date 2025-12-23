// Structure copy
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = p1; // copy
    printf("p2: (%d, %d)\n", p2.x, p2.y);
    return 0;
}