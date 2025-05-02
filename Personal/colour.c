#include <stdio.h>
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define BG_BLUE "\033[1;44m"

int main()
{
    printf( RED"This is red text.\n" RESET);
    return 0;
}
