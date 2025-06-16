/*
Find the sum of n numbers entered by the user
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
        printf("Enter a number: ");
        int num;
        scanf("%d", &num);
        sum = sum + num;
        limit--;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}