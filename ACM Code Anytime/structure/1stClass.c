#include <stdio.h>
#include <string.h>
struct Student
{
    char name[10];
    long SAP_ID;
    int age;
};
void main()
{
    struct Student a;
    strcpy(a.name, "MAYANK");
    a.SAP_ID = 590012362;
    a.age = 18;
    printf("%s\n", a.name);
    printf("%ld\n", a.SAP_ID);
    printf("%d\n", a.age);
}