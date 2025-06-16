/*
Print for n = 5

a
a b
a b c
a b c d
a b c d e

*/

#include<stdio.h>

void p(int a, int c)
{
    if(a>0)
    {
        printf("%c", c);
        p(a-1, c+1);
    }


}

void f(int b, int n1, int c)
{
    if(b <= n1)
    {
        p(b, c);
        printf("\n");
        f(b+1, n1, c);
    }
}

int main()
{
    f(1, 5, 97);
    return 0;
}