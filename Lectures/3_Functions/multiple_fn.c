/*
Write a program containing 3 functions.
1. calculating the area of a circle where radius is the parameter
2. calculating the area of a square where side is the parameter
3. calculating the area of a rectangle where length and breadth are the parameters.
You should take 4 inputs (radius, side, length and breadth) from the user in main(). 
Return values from the 3 functions and print the areas in main().
*/

#include<stdio.h>
#include<math.h>

double area_of_circle(double radius)
{
    const double PI = 3.14;
    return (PI * pow(radius, 2));
}

int area_of_square(int);

double area_of_rect(int len, double bre)
{
    return len*bre;
}

int main()
{
    double r;
    printf("Enter radius of a circle: ");
    scanf("%lf", &r);
    double areacircle = area_of_circle(r);
    printf("Area of a circle with radius %.2lf is %.2lf\n", r, areacircle);

    int s;
    printf("Enter side of a square: ");
    scanf("%d", &s);
    printf("Area of a square of side %d is %d\n", s, area_of_square(s));

    int l; double b;
    printf("Enter length as int and breadth as double of a rectangle: ");
    scanf("%d %lf", &l, &b);
    printf("Area of a rectangle of length %d, breadth %.2lf is %.2lf\n", l, b, area_of_rect(l, b));
}

int area_of_square(int s)
{
    return pow(s,2);
}