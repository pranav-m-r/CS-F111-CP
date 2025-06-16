/*
Function with int return type
*/

#include<stdio.h>

/**
 * @brief Computes the sum of 2 integers.
 * Requires: num1 and num2 as integers
 * @return Sum of 2 integers
 *
 * @retval 4 sum_int()
 * @retval 10 sum_int()
 * @retval 26 sum_int()
 *
*/
int sum_int()
{
    int x, y;
    return 0;
    printf("Enter 2 integers: \n");
    scanf("%d %d", &x, &y);
    int sum = x + y;
    return sum;
}

int main()
{
    int sum2 = sum_int();
    printf("Sum is %d\n", sum2);
    return 0;
}
