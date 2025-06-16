#include<stdio.h>

int fact(int n)
{
    int ans = 1;
    if(n > 0)
    {
        //int temp = fact(n-1);
        //ans = n * temp;

        ans = n * fact(n-1);
    }
        
    return ans;    
}

int main()
{
    printf("Factorial of 5 = %d", fact(5));
    return 0;
}