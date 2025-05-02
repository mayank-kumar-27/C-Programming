// A company wants to calculate the annual salary of an employee given their monthly salary.
// If the employee has been with the company for more than 5 years, they get a bonus of 10% on theirannual salary.
// Write a C program to calculate the final salary.
#include <stdio.h>
int main()
{
    int Time;
    float Salary, Total_Salary;
    printf("Enter the Monthly Salary : ");
    scanf("%f", &Salary);
    printf("Enter the Years Employee has been With the Company : ");
    scanf("%d", &Time);
    Total_Salary = 12 * Salary;
    if (Time <= 5)
    {
        printf("The Annual Salary is %.2f", Total_Salary);
    }
    else
    {
        printf("The Annual Salary is %.2f", (Total_Salary + (Total_Salary / 10)));
    }
    return 0;
}