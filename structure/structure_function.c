// Structure with Functions: Create a structure called Employee with fields for name, ID, and salary.
// Write functions to input and display employee details. Use these functions to manage a list of employees.
#include <stdio.h>
struct employee
{
    char name[50];
    int ID;
    float salary;
};
void takedetail(struct employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Name : ");
        getchar();
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Enter ID : ");
        scanf("%d", &emp[i].ID);
        printf("Enter Salary : ");
        scanf("%f", &emp[i].salary);
    }
}
void printdetail(struct employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s", emp[i].name);
        printf("%d\n", emp[i].ID);
        printf("%.2f\n", emp[i].salary);
    }
}
int main()
{
    int n;
    printf("Enter the Number of Employee : ");
    scanf("%d", &n);
    struct employee emp[n];
    takedetail(emp, n);
    printdetail(emp, n);
    return 0;
}