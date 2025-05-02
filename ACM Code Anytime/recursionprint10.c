#include<stdio.h>

    void natural(int a)
    {
        printf("%d",a);
        if(a==10)
        {
            return;
        }
     return natural(a+1);
    }

    int main()
    {
        int n;
        scanf("%d",n);
        natural(n);
    }