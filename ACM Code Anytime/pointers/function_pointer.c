// #include <stdio.h>
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a=10,b=2;
//     void (*ptr)(int *, int *) = &swap;
//     ptr(&a,&b);
//     printf("%d %d",a,b);
// }

// Addition.  
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
void main()
{
    int (*ptr)(int, int) = &add;
    printf("%d", (*ptr)(10, 2));
}