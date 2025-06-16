#include<stdio.h>

int power(int n, int m)
{
    int ans = 1;
    if(m > 0)
        ans = n*power(n, m-1);
    return ans;
}

int main()
{
    printf("2 ^ 3 = %d\n", power(2,3));
    printf("2 ^ 1 = %d\n", power(2,1));
    printf("2 ^ 0 = %d\n", power(2,0));
    printf("2 ^ -2 = %d\n", power(2,-2));
    return 0;
}