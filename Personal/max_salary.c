#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    char ID[20];
    char join[10];
    int salary;
};

void max_salary(struct employee e[], int count)
{
    int max = e[0].salary;
    int max_i = 0;
    for (int i = 1; i < count; i++)
    {
        if (e[i].salary > max)
        {
            max = e[i].salary;
            max_i = NULL;
            //max_i = i;
        }
    }
    printf("Employee with the highest salary:\n");
    printf("Name: %s\nID: %s\nDate of Joining: %s\nSalary: %d\n", e[max_i].name, e[max_i].ID, e[max_i].join, max);
}

int main()
{
    int i = 0, choice;
    struct employee e[10];
    do
    {
        printf("Choose:\n1 to Add Employee\n2 to Print Employee with Max Salary\n0 to Exit\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Enter Employee Name: ");
            fgets(e[i].name, sizeof(e[i].name), stdin);
            e[i].name[strcspn(e[i].name, "\n")] = '\0';

            printf("Enter Employee ID: ");
            fgets(e[i].ID, sizeof(e[i].ID), stdin);
            e[i].ID[strcspn(e[i].ID, "\n")] = '\0';

            printf("Enter Date of Joining: ");
            fgets(e[i].join, sizeof(e[i].join), stdin);
            e[i].join[strcspn(e[i].join, "\n")] = '\0';

            printf("Enter Salary: ");
            scanf("%d", &e[i].salary);

            printf("\nThe employee is successfully added.\n");
            i++;
            break;

        case 2:
            max_salary(e, i);
            break;

        case 0:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Enter a valid input.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}