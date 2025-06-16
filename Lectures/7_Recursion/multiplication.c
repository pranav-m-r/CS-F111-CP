#include<stdio.h>

int mul(int n, int m)
{
    int ans = 0;
    if(m > 0)
        ans = n + mul(n, m-1);
    return ans;
}

int main()
{
    int num1 = 5, num2 = 3;
    printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
    return 0;
}