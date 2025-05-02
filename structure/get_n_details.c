#include <stdio.h>
struct detail
{
    int id;
    int salary;
};
int take_detail(struct detail arr[])
{
    int n;
    int i = 0;
    do
    {
        printf("Enter 1 to add detail : ");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("Enter ID : ");
            scanf("%d", &arr[i].id);
            printf("Enter Salary : ");
            scanf("%d", &arr[i].salary);
            i++;
        }
    } while (n == 1);
    return i;
}
void print_detail(struct detail arr[], int count)
{
    for (int j = 0; j < count; j++)
    {
        printf("%d", arr[j].id);
        printf("%d", arr[j].salary);
    }
}
int main()
{
    struct detail arr[100];
    int count = take_detail(arr);
    print_detail(arr, count);
    return 0;
}