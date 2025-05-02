#include <stdio.h>
int f(int x, int *py, int **m)
{
    int y, z;
    **m += 1;
    z = **m;
    *py += 2;
    y = *py;
    x += 3;
    return (x + y + z);
}
int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;

    printf("%d", f(c, b, a));
    return 0;
}