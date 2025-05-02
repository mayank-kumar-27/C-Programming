// Develop a program that calculates the final grade of a student based on their marks in multiple subjects.
#include <stdio.h>
int main()
{
    int n;
    float sum = 0, percentage;
    printf("Enter the Number of Subjects : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Number Of subjects cant be less then 1.");
        return 1;
    }
    float sub[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks in %dst Subject out of 100 : ", i + 1);
        scanf("%f", &sub[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += sub[i];
    }
    percentage = (sum * 100) / (n * 100);
    printf("\nThe Total marks scored by This student is %.2f and The precentage is %.2f\n", sum, percentage);
    if (percentage > 95)
    {
        printf("\nThe Grade is A+\n");
    }
    else if (percentage > 90)
    {
        printf("\nThe Grade is A\n");
    }
    else if (percentage > 85)
    {
        printf("\nThe Grade is B+\n");
    }
    else if (percentage > 80)
    {
        printf("\nThe Grade is B\n");
    }
    else if (percentage > 75)
    {
        printf("\nThe Grade is c+\n");
    }
    else if (percentage > 70)
    {
        printf("\nThe Grade is c\n");
    }
    else if (percentage > 60)
    {
        printf("\nThe Grade is D\n");
    }
    else
    {
        printf("\nNo Grade can be Assigned as Your ward is Failed\n");
    }
    return 0;
}