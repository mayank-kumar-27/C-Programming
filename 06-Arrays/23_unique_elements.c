// Unique elements
#include <stdio.h>

int main() {
    int n, arr[100], unique[100], count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[count++] = arr[i];
        }
    }
    printf("Unique: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}