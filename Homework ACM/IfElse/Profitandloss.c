//Write a C program to calculate profit or loss.
#include<stdio.h>
int main()
{
    int sp,cp,loss,profit;
    printf("Enter CP ");
    scanf("%d",&cp);
    printf("Enter SP ");
    scanf("%d",&sp);

    profit=sp-cp;
    loss=cp-sp;
    
    if(sp>cp)
    {
        printf("Profit Of %d",profit);
    }
    else
    {
        printf("loss of %d",loss);
    }
    return 0;

}
//Done...