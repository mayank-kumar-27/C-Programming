// Strong number
#include <stdio.h>

int main() {
    int n, original, remainder, fact, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    if (sum == original) {
        printf("Strong\n");
    } else {
        printf("Not strong\n");
    }
    return 0;
}