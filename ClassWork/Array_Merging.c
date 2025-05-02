// Write a code to merge two Arrays.
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the Size of First array :");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the Size of Second array :");
    scanf("%d",&m);
    int arr2[m];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int mergedarr[n+m];
    for (int i=0;i<n;i++)
    {
        mergedarr[i]=arr1[i];
    }
    for (int i=0;i<m;i++)
    {
        mergedarr[n+i]=arr2[i];
    }
    for (int i=0;i<n+m;i++)
    {
        printf("%d",mergedarr[i]);
    } 
    return 0;
}