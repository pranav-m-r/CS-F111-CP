/*
Print '*' in each line for 'n' times
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    while (n>0)
    {
        printf("*");
        n--;
    }
    
    return 0;
}