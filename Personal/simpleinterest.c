#include<stdio.h>
int main()
{
    int P, R, T;
    float SI;
    int Amount;

    // P is Print , R is Rate , T is Time

    printf("Enter P ");
    scanf("%d", &P);
    printf("Enter R ");
    scanf("%d", &R);
    printf("Enter T ");
    scanf("%d", &T);

    // Formula Used

    SI= (float)(P*R*T) /100;
    Amount= SI + P;


    printf("Simple Interest is %f \n", SI);
    printf("Amount is %d", Amount);

    return 0;

}