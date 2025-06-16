/*
Function Declaration
*/

#include<stdio.h>

int sum_int(int, int);
//int sum_int(int x, int y); //both are function declaration

int main()
{
    int x, y;
    printf("Enter 2 integers\n");
    scanf("%d %d", &x, &y);
    int sum = sum_int(x, y);
    printf("Sum of %d and %d is %d\n", x , y, sum);
    return 0;
}

/**
 * Function Definition
 * @brief Computes the sum of 2 integers.
 * Requires: num1 and num2 as integers
 * @return Sum of num1 and num2
 *
 * @retval 4 sum_int(2, 2)
 * @retval 10 sum_int(4, 6)
 * @retval 26 sum_int(12, 14)
 *
*/
int sum_int(int x, int y)
{
    int sum = x + y;
    return sum;
}