//Finding Area of a circle with user input

#include<stdio.h>

int main()
{
    double radius;
    const double PI = 3.14;
    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);
    double area = PI * radius * radius;
    printf("The area of a circle with radius %.2lf is %.2lf\n", radius, area);
    return 0;
}