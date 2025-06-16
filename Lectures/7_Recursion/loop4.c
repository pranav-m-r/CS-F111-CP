/*
       Example: For n = 3, the following should be printed:
        * * *
        * *
        * 
        * * 
        * * * 
        
        n = 2
        * *
        * 
        * * 
*/

#include<stdio.h>

void p(char c, int n)
{
    if (n==1)
        printf("%c\n", c);
    else
    {
        printf("%c ",c);
        p(c, n-1);
    }
}

void f(int n)
{
    if (n==1)
    {
        p('*',1);
    }
    else
    {
        p('*',n);
        f(n-1);
        p('*',n);
    }  
}

int main()
{
    f(4);
    return 0;
}
