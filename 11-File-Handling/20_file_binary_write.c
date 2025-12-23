// File binary write
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int arr[5] = {1, 2, 3, 4, 5};
    fwrite(arr, sizeof(int), 5, fp);
    printf("Binary data written\n");
    fclose(fp);
    return 0;
}