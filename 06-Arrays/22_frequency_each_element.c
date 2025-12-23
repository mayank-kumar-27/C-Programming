// Frequency each element
#include <stdio.h>

int main() {
    int n, arr[100], freq[100], visited[100] = {0};
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        freq[i] = count;
    }
    printf("Frequency:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            printf("%d: %d\n", arr[i], freq[i]);
        }
    }
    return 0;
}