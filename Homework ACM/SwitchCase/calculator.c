//Write a C program to create calculator using switch case
#include<stdio.h>
int main()
{
    int ch ;
    int a,b;
    printf("Enter Number A :");
    scanf("%d",&a);
    printf("Enter Number B :");
    scanf("%d",&b);
    printf("Enter the Function :\n enter 1 for addition \n enter 2 for subtraction\n enter 3 for multiplication \n enter 4 for division\n : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("Addition is %d",a+b);
        break;
        case 2:
        printf("Substraction is %d",a-b);
        break;
        case 3:
        printf("Multiplication is %d",a*b);
        break;
        case 4:
        printf("Division is %d",a/b);
        break;
    }
    return 0;
}
//Done