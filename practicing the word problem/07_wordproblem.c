//A shopkeeper offers a discount of 5% on purchases above $200. 
//Write a program that calculates the final amount a customer has to pay after discount.
#include<stdio.h>
int main()
{
    float Amount;
    printf("Enter the Amount on The Bill : $ ");
    scanf("%f",&Amount);
    if(Amount<=200)
    {
        printf("You have To pay $ %.2f Only",Amount);
    }
    else
    {
        printf("You have To pay $ %.2f Only",(Amount - (Amount/20)));
    }
    return 0;
} 