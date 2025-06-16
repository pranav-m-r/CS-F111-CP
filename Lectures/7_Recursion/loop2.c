/*
Print for n = 5

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
void star(int x)
{
    if(x > 0)
    {
        printf("* ");
        star(x-1);
    }
    else
        printf("\n");
}

void pattern(int n)
{
    if(n > 0)
    {
        star(n);
        pattern(n-1);
    }
}


int main()
{
    pattern(5);
    return 0;
}