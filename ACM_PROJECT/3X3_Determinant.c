#include <stdio.h>
int Determinant(int arr[3][3])
{
    int Det;
    Det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
    return Det;
}
int main()
{
    int arr[3][3];
    printf("To find the Determinant of a 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the Value of Matrix at Index [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nEntered Matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nAnd the Determinant of Enterd Matrix is %d\n", Determinant(arr));
    return 0;
}