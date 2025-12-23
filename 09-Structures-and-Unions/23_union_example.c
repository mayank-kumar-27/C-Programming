// Union example
#include <stdio.h>

union Employee {
    int id;
    char name[50];
};

int main() {
    union Employee e;
    printf("Enter id: ");
    scanf("%d", &e.id);
    printf("ID: %d\n", e.id);
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Name: %s\n", e.name);
    return 0;
}