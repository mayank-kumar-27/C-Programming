// Write a program that calculates the BMI (Body Mass Index) of a person based on their weight and height entered by the user
#include <stdio.h>
int main()
{
    float weight, height;
    printf("Enter the Mass in KG's : ");
    scanf("%f", &weight);
    printf("Enter the Height in Meter's : ");
    scanf("%f", &height);
    printf("The BMI of this person is %.2f", (weight / (height * height)));
    return 0;
}