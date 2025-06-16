//Finding Area of a circle

#include<stdio.h>

int main()
{
    double radius = 5;
    const double PI = 3.14;
    //PI = 3.24;
    double area = PI * radius * radius;
    printf("The area of a circle with radius %.2lf is %.2lf\n", radius, area);
    return 0;
}