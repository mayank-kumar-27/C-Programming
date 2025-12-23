// Merge two arrays
#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], merged[200];
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter array1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter array2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i];
    }
    printf("Merged: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}