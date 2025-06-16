/*
Print for n = 5

* * * * *
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int i = 1;
        while(i <= n)
        {
            printf("* ");
            i++;
        }
        printf("\n");
        n--;
    }
    
    
    return 0;
}