// Array of structures dynamic
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    struct Student *arr = (struct Student*)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++) {
        printf("Enter name and roll for %d: ", i + 1);
        scanf("%s %d", arr[i].name, &arr[i].roll);
    }
    for (int i = 0; i < n; i++) {
        printf("Student %d: %s, %d\n", i + 1, arr[i].name, arr[i].roll);
    }
    free(arr);
    return 0;
}