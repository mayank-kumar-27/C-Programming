#include <stdio.h>
// struct name
// {
//     int fav_num;
//     struct batch
//     {
//         int bch;
//     } b;
// };

// int main()
// {
//     struct name mayank;
//     scanf("%d", &mayank.fav_num);
//     printf("%d", mayank.fav_num);

//     scanf("%d", &mayank.b.bch);
//     printf("%d", mayank.b.bch);
//     return 0;
// }

// struct name
// {
//     int batch;
//     union university
//     {
//         int fav_num;
//         float s_fav_num;
//     } b;
// };
// int main()
// {
//     struct name mayank;
//     scanf("%d", &mayank.batch);
//     scanf("%d", &mayank.b.fav_num);
//     scanf("%f", &mayank.b.s_fav_num);

//     printf("%d\n", mayank.batch);
//     printf("%d\n", mayank.b.fav_num);
//     printf("%f\n", mayank.b.s_fav_num);

//     return 0;
// }

struct name
{
    int a;
    int *ptr;
} u;
int main()
{
    printf("%d", u.ptr);
    return 0;
}


// int main()
// {
//     int a=011;
//     printf("%d",a);
//     return 0;
// }