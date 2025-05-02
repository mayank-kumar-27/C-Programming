#include<stdio.h>
float square(float a)
{
    return a*a;
}
int main()
{
    float x;
    printf("Enter A : ");
    scanf("%f",&x);
    printf("The Square of entered number is %.2f",square(x));
    return 0;
}