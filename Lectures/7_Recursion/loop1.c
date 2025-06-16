/*
Print '*' in each line for 'n' times
*/

#include<stdio.h>

void pattern(int n)
{
    if(n > 0)
    {
        printf("*\n");
        pattern(n-1);
    }
}

int main()
{
    pattern(5);
    return 0;
}