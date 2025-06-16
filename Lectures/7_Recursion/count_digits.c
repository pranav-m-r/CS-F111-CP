#include<stdio.h>

int count(int n)
{
    int ans = 1;
    if(n > 9)
        ans = 1 + count(n/10);
    return ans;
}

int main()
{
    int num = 1000;
    printf("Number of digits in %d is %d\n", num, count(num));
    return 0;
}