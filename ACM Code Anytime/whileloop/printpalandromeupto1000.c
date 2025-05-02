#include<stdio.h>
void main()
{
    int n=121, rev=0;
    for(n=1; n<=1000; n++)
    {
        int i;
       while(i>0)
       {
           rev=rev*10+(i%10);
           i=i/10;
       }
    }
    if (n==rev)
    printf("n");
}