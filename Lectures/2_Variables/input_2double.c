//Finding Area of a rectangle with user inputs

#include<stdio.h>

int main()
{
    double len, b;
    /*
    printf("Enter Length: ");
    scanf("%lf", &len);
    printf("Enter breadth: ");
    scanf("%lf", &b);
    */
   printf("Enter length and breadth separated by comma\n");
   scanf("%lf,%lf", &len, &b);
    printf("The area of a rectangle with length %.2lf and breadth %.2lf is %.2lf\n", len, b, len*b);
    
    return 0;
}