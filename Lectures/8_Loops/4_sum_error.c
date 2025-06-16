/*
Find the sum of n positive numbers.
If user enters a negative number, 
ask the user to enter again until the user enter a positive number
*/

#include<stdio.h>
int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    int sum = 0;
    while(limit >= 1)
    {
        int num = -1;
        while(num < 0)
        {
            printf("Enter a positive number: ");
            scanf("%d", &num);
        }
        sum = sum + num;
        limit--;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}