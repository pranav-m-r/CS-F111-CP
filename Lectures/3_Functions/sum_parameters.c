/*
Function with int return type and parameters
*/

#include<stdio.h>

/**
 * @brief Computes the sum of 2 integers.
 * Requires: num1 and num2 as integers
 * @return Sum of num1 and num2
 *
 * @retval 4 sum_int(2, 2)
 * @retval 10 sum_int(4, 6)
 * @retval 26 sum_int(12, 14)
 *
*/
int sum_int(int num1, int num2)   //Formal Parameters
{
    return (num1 + num2);
}

int main()
{
    int x, y;
    printf("Enter 2 integers\n");
    scanf("%d %d", &x, &y);
    //int sum = sum_int(x, y);   //Function Call with Actual Parameters
    printf("Sum of %d and %d is %d\n", x , y, sum_int(x, y));
    return 0;
}
