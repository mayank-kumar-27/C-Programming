#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    a = 15;
    printf("%p\n", ptr);
    printf("%d", *ptr);
    return 0;
}