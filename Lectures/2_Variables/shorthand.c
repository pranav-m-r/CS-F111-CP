/*
Explaining shorthand operators

For 2 variables x and y
x += y ------> x = x + y
x -= y ------> x = x - y

Similarly for *=, /= and %=
*/

#include<stdio.h>
int main()
{
    
    int a = 2, b = 3;

    a -= b;
    b *= a;
    b /= a;
    
    printf("a = %d, b = %d\n", a, b);

    return 0;
}