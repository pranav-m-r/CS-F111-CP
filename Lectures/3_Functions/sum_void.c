/*
Function with void return type
*/

#include<stdio.h>

/**
 * @brief Computes the sum of 2 integers.
 * Take 2 integers as user input and prints the sum.
*/
void sum_int()
{
    int x, y;
    printf("Enter 2 integers: \n");
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("Sum of %d and %d is %d\n", x, y, sum);
}

int main()
{
    sum_int();
    return 0;
}
