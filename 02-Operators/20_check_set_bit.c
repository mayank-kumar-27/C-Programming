// Check set bit
#include <stdio.h>

int main() {
    int num, pos;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit position (0-31): ");
    scanf("%d", &pos);
    if (pos >= 0 && pos < 32) {
        int bit = (num >> pos) & 1;
        printf("Bit at position %d is %d\n", pos, bit);
        if (bit) {
            printf("Bit is set\n");
        } else {
            printf("Bit is not set\n");
        }
    } else {
        printf("Invalid position\n");
    }
    return 0;
}