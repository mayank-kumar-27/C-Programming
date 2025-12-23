// Structure input output
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;
    printf("Enter name and age: ");
    scanf("%s %d", p.name, &p.age);
    printf("Name: %s, Age: %d\n", p.name, p.age);
    return 0;
}