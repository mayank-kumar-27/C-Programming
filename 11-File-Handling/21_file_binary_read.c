// File binary read
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int arr[5];
    fread(arr, sizeof(int), 5, fp);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}