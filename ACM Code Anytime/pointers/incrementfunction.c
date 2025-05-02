// #include<stdio.h>
// void increment(int *a)
// {
//     int temp;
//     temp=*a;
//     temp++;
//     *a=temp;
// }
// void main()
// {
//     int x;
//     printf("Enter the Value :");
//     scanf("%d",&x);
//     increment(&x);
//     printf("%d",x);
// }

#include<stdio.h>
void increment(int *a)
{
    (*a)++;
}
void main()
{
    int x;
    printf("Enter the Value :");
    scanf("%d",&x);
    increment(&x);
    printf("%d",x);
}