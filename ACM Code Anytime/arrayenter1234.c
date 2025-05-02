// #include<stdio.h>
// int main()
// {
//     int arr[3];
//     arr[0]=1;
//     arr[1]=2;
//     arr[2]=3;
//     printf("%d\n%d\n%d ",arr[0],arr[1],arr[2]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Ente the number :");
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, t = 0;
//     printf("Enter the size of array :");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Ente the number :");
//         scanf("%d", &arr[i]);
//         t = t + arr[i];
//     }
//     printf("The sum is %d\n", t);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter the number of rows you want :");
    scanf("%d",&m);
    printf("Enter the number of columns you want :");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            
            printf("Enter the value :");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}