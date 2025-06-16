/*
Print for n = 5

*
* *
* * *
* * * * 
* * * * *

*/

#include<stdio.h>

void p(int a)
{
    if(a>0)
    {
        printf("*");
        p(a-1);
    }


}

void f(int b, int n1)
{
    if(b <= n1)
    {
        p(b);
        printf("\n");
        f(b+1, n1);
    }
}

int main()
{
    f(1, 5);
    return 0;
}