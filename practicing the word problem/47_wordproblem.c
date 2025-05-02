// Write a program to calculate the distance between two points (x1, y1) and (x2, y2) entered by the user
#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, distance;
    printf("Enter the first Coordinate (X1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the Second Coordinate (X2,y2) : ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("The Distance Between these Two Coordinates is %d", distance);
    return 0;
}