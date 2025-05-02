//Write a program that asks the user for their age and then prints out whether they are eligible to
//vote (age 18 or older) or not.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the Age of the Candidate : ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("Your age is just %d and You are not Eligible to VOTE!",age);
    }
    else
    {
        printf("You are Eligible to VOTE!");
    }
    return 0;
}