// Array of Structures: Write a program that defines a structure named Student with fields for
// name, roll number, and marks. Create an array of Student structures to store data for n students
// (where n is input from the user), and then print the details of all students.
#include <stdio.h>
struct student
{
    char name[50];
    int roll_number;
    int marks;
};
int main()
{
    int n;
    printf("Enter the NUmber of Students : ");
    scanf("%d", &n);
    struct student student[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Name of %d student : \n", i + 1);
        getchar();
        fgets(student[i].name, sizeof(student[i].name), stdin);
        printf("Enter the Roll Number of Student : ");
        scanf("%d", &student[i].roll_number);
        printf("Enter Marks of Student : ");
        scanf("%d", &student[i].marks);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s", student[i].name);
        printf("%d\n", student[i].roll_number);
        printf("%d\n", student[i].marks);
        printf("\n");
    }
    return 0;
}