// File fread fwrite
#include <stdio.h>

int main() {
    FILE *src = fopen("data.bin", "rb");
    FILE *dest = fopen("copy.bin", "wb");
    if (src == NULL || dest == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    int buffer[10];
    size_t bytes;
    while ((bytes = fread(buffer, sizeof(int), 10, src)) > 0) {
        fwrite(buffer, sizeof(int), bytes, dest);
    }
    printf("Binary file copied\n");
    fclose(src);
    fclose(dest);
    return 0;
}