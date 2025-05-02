// A teacher needs to calculate the average score of 5 students in a class.
// Write a program that takes 5 scores as input and outputs the average score.
#include <stdio.h>
int main()
{
    float Marks, Total_Marks = 0;
    int n;
    printf("Enter the Number of Students :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the Marks of %d Student :", i);
        scanf("%f", &Marks);
        Total_Marks = Total_Marks + Marks;
    }
    printf("The Average Marks is %.2f", Total_Marks / n);
    return 0;
}