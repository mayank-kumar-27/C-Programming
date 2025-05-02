//write a programm to print value of all trigo ratios by entering theta.
#include<stdio.h>
void main()
{
    int theta;
    printf("Enter the Value of theta: ");
    scanf("%d",&theta);
    if(theta==0)
    {
        printf("sin = 0\ncos = 1\ntan = 0\ncosec = Not Defined\nsec = 1\ncot = Not Defined");
    }
    else if(theta==30)
    {
        printf("sin = 1/2\ncos = root3/2\ntan = 1/root3\ncosec = 2\nsec = 2/root3\ncot = root3");
    }

}