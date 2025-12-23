// Nested structure
#include <stdio.h>

struct Address {
    char city[50];
    int pin;
};

struct Person {
    char name[50];
    struct Address addr;
};

int main() {
    struct Person p;
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter city and pin: ");
    scanf("%s %d", p.addr.city, &p.addr.pin);
    printf("Name: %s, City: %s, Pin: %d\n", p.name, p.addr.city, p.addr.pin);
    return 0;
}