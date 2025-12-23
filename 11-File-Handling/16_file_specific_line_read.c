// File specific line read
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int line_num;
    printf("Enter line number: ");
    scanf("%d", &line_num);
    char buffer[1000];
    int current_line = 1;
    while (fgets(buffer, sizeof(buffer), fp)) {
        if (current_line == line_num) {
            printf("Line %d: %s", line_num, buffer);
            break;
        }
        current_line++;
    }
    fclose(fp);
    return 0;
}