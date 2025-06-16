#include<stdio.h>

void factor(int n, int i)
{
    int rem = n%i;
    if(rem == 0 && i<=n && n>0)
    {
        printf("%d is a factor\n", i);
    }
    if(i > n)
        return;
    factor(n, i+1);
    
}

int main()
{
    factor(34, 1);
}