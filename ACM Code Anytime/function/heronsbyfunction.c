#include<math.h>
#include<stdio.h>
float herons(float a, float b, float c)
{
    float s=(a+b+c)/2;
    float A= sqrt(s*(s-a)*(s-b)*(s-c));
    return A;
}
int main()
{
    float x,y,z;
    printf("Enter a :");
    scanf("%f",&x);
    printf("Enter b :");
    scanf("%f",&y);
    printf("Enter c :");
    scanf("%f",&z);
    printf("%f", herons(x,y,z));
    return 0;
}