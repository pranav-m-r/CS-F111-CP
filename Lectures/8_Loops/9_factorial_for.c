#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans = 1, counter = 1;
    while(counter <= num)
    {
        ans = ans * counter++;
    }
    printf("Factorial of %d is %d\n", num, ans);
    return 0;
}