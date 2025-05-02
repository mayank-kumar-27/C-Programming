#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee
{
    char Name[50];
    char Id[20];
};

int main()
{
    struct Employee employee;
    FILE *file = fopen("emp.txt", "a"); // Open the file in append mode
    if (!file)
    {
        perror("Error opening file");
        return 1;
    }

    // Input employee details
    printf("Enter Employee Name: ");
    fgets(employee.Name, sizeof(employee.Name), stdin);
    employee.Name[strcspn(employee.Name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Employee ID: ");
    fgets(employee.Id, sizeof(employee.Id), stdin);
    employee.Id[strcspn(employee.Id, "\n")] = '\0'; // Remove trailing newline

    // Write to the file
    fprintf(file, "Name: %s, ID: %s\n", employee.Name, employee.Id);
    printf("Employee Added Successfully\n");

    fclose(file); // Close the file
    return 0;
}
