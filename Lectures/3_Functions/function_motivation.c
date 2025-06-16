//Motivation for using functions

#include<stdio.h>

int main()
{
    int x = 5 , y = 12; //Variable declaration and initialization
    int sum = x + y;
    printf("Sum of %d and %d is %d\n", x, y, sum);
    x = 13;
    y = 18;
    sum = x + y;
    printf("Sum of %d and %d is %d\n", x, y, sum);
    return 0;
}