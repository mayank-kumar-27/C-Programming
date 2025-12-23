// Enumeration
#include <stdio.h>

enum Days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main() {
    enum Days day = Wed;
    printf("Day: %d\n", day);
    return 0;
}