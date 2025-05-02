#include <stdio.h>
int main()
{
    int a = 27;
    int *ptr = &a;
    // printf("%p\n", ptr); //it tells us the address in hexadecimal form use=%p
    // printf("%d\n", ptr); //it tells us the address in decimal value
    printf("%d\n", *ptr);//it prints the value of ptr stored in a, use of *ptr
    // printf("%p\n", *ptr);//it prints the value u assigned in a in hexadecimal form
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     int n;
//     // printf("%p\n",ptr);
//     // printf("%d\n",*ptr);
//     // printf("%d\n",ptr);

//     // for(int i=0;i<5;i++)
//     // {
//     //     printf("The address is %d\n",ptr);
//     //     printf("The value at this address is %d\n",*ptr);
//     //     ptr++;
//     // }
    
//     printf("Enter the Index of which u want the value : ");
//     scanf("%d",&n);
//     printf("%d",*(ptr+n));
//     return 0;
// }