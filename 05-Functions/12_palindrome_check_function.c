// Palindrome check function
#include <stdio.h>

int isPalindrome(int n) {
    int original = n, rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}