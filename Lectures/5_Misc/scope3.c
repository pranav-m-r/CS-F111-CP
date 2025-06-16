#include<stdio.h>

int main()
{
    int x = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x > 0) 
    {
        int y = 0;
        printf("Enter an integer greater than the previous one: ");
        scanf("%d", &y);
        if (y > x) 
        {
            printf("Good choice!\n");
        } 
        else 
        {
            printf("Ugh! Can't you follow simple instructions!\n");
        }
    }
    printf("You entered %d and %d\n", x, y);
    return 0;
}