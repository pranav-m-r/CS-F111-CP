#include<stdio.h>

int mul(int n, int m)
{
    int ans = 0;
    if(m > 0)
        ans = n + mul(n, m-1);
    return ans;
}

void table(int n, int i)
{
    if(i <= 10)
    {
        printf("%d * %d = %d\n", n, i, mul(n,i));
        table(n, i+1);
    }
}

int main()
{
    int num1 = 5;
    table(num1, 1);
    return 0;
}