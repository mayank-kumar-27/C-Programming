// File replace word
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    FILE *out = fopen("replaced.txt", "w");
    if (fp == NULL || out == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char word[50], replace[50];
    printf("Enter word to replace: ");
    scanf("%s", word);
    printf("Enter replacement: ");
    scanf("%s", replace);
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), fp)) {
        char *pos = strstr(buffer, word);
        if (pos) {
            *pos = '\0';
            fprintf(out, "%s%s%s", buffer, replace, pos + strlen(word));
        } else {
            fputs(buffer, out);
        }
    }
    printf("Word replaced\n");
    fclose(fp);
    fclose(out);
    return 0;
}