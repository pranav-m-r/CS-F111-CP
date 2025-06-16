#include<stdio.h>

int count(int n)
{
    /*
    int ans;
    if(n < 10)
    {
        ans = 1;
    }
    else
    {
        ans = 1 + count(n/10);
    }
    */
   int c = 1;
   while(n > 9)
   {
    c++;
    n /= 10;
   }
    return c;
    
}

int main()
{
    int num = 99998;
    printf("Number of digits in %d is %d\n", num, count(num));
    return 0;
}