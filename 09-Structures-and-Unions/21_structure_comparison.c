// Structure comparison
#include <stdio.h>
#include <string.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {10, 20}, p2 = {10, 20};
    if (memcmp(&p1, &p2, sizeof(struct Point)) == 0) {
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }
    return 0;
}