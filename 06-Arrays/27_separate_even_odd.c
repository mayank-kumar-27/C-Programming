// Separate even odd
#include <stdio.h>

int main() {
    int n, arr[100], even[100], odd[100], e = 0, o = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }
    printf("Even: ");
    for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd: ");
    for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    printf("\n");
    return 0;
}