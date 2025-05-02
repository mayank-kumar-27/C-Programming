// Write a programm to find Average of Number upto n
#include<stdio.h>
void main()
{
    float n,p=0;
    printf("Enter N upto which u want Average :");
    scanf("%f",&n);
    for(int i=1; i<=n; i++)
    p=p+(i/n);
    printf("Average is %f",p);

}