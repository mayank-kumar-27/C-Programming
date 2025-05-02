#include<stdio.h>
int main()
{
    int CP,SP,Profit,Loss;
    printf("Enter CP ");
    scanf("%d",&CP);

    printf("Enter SP ");
    scanf("%d",&SP);

    Profit=SP-CP;
    Loss=CP-SP;

    if(SP>CP)
    {
        printf("Profit of %d",Profit);
    }
    else
    {
        printf("Loss of %d",Loss);
    }

    return 0;
}