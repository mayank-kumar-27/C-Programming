#include <stdio.h>
int main()
{
    int Ans, i, j, k;
    int A[1][1];
    int B[1][1];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                Ans[i][j] = Ans[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    return 0;
}