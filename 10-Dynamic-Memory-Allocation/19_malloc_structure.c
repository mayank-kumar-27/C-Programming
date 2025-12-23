// Malloc structure
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    printf("Enter name and roll: ");
    scanf("%s %d", s->name, &s->roll);
    printf("Name: %s, Roll: %d\n", s->name, s->roll);
    free(s);
    return 0;
}