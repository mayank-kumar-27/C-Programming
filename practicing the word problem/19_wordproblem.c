// Write a program that calculates the total marks and percentage of five subjects entered by the
// user and determines the grade based on the percentage.
#include<stdio.h>
int main()
{
    float marks1,marks2,marks3,marks4,marks5,Total_Marks,Percentage;
    printf("Enter the Marks scored out of 100 in 1st SUbject :");
    scanf("%f",&marks1);
    printf("Enter the Marks scored out of 100 in 2nd SUbject :");
    scanf("%f",&marks2);
    printf("Enter the Marks scored out of 100 in 3rd SUbject :");
    scanf("%f",&marks3);
    printf("Enter the Marks scored out of 100 in 4th SUbject :");
    scanf("%f",&marks4);
    printf("Enter the Marks scored out of 100 in 5th SUbject :");
    scanf("%f",&marks5);

    Total_Marks=marks1+marks2+marks3+marks4+marks5;
    Percentage=(Total_Marks/500)*100;

    printf("The total Marks Scored bt the student is %.2f \nThe Percentage is %.2f Percent\n",Total_Marks,Percentage);
    if(Percentage>=95)
    {
        printf("The Grade is A+");
    }
    else if(Percentage>=90)
    {
        printf("The Grade is A");
    }
    else if(Percentage>=85)
    {
        printf("The Grade is B+");
    }
    else if(Percentage>=80)
    {
        printf("The Grade is B");
    }
    else if(Percentage>=75)
    {
        printf("The Grade is c+");
    }
    else if(Percentage>=70)
    {
        printf("The Grade is c");
    }
    else if(Percentage>=65)
    {
        printf("The Grade is D+");
    }
    else if(Percentage>=60)
    {
        printf("The Grade is D");
    }
    else 
    {
        printf("You are Fail! Better Luck Next Time!");
    }
    return 0;
}