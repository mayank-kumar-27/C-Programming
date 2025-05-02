#include<stdio.h>
int power(int b,int e)
{
    int ans=1;
    for(int i=1; i<=e; i++)
    {
        ans=ans*b;
    }
    return ans;
}
int main()
{
    printf("%d",power(3,2));
    return 0;
}