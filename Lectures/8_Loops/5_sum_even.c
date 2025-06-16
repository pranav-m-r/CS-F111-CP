/*
Design a function that takes two
integers (first must be smaller than
the second) and computes the sum
of all even integers between the two,
both inclusive
*/

#include<stdio.h>

// /*
//Option 1: using while loop
int sum(int num1, int num2)
{
    int s = 0;
    while(num1 <= num2)
    {
        if(num1 % 2 == 0)
        {
            s += num1;
            num += 2;
        }
        else
            num1++;    
    }
    return s;
}
// */

/*
//Option 2: using recusion
int sum(int num1, int num2)
{
    int ans;
    if(num1 == num2)
    {
        if(num1 % 2 == 0)
            ans = num1;
        else
            ans = 0;    
    }
    else
    {
        if(num1 % 2 == 0)
            ans = num1 + sum(num1 + 1, num2);
        else
            ans = sum(num1 + 1, num2);
    }
    return ans;
}
*/

int main()
{
    
    printf("Enter 2 numbers: (1st number must be smaller than the second)\n");
    scanf("%d%d", &n1, &n2);
    //How can you make the user keep on entering inputs unless 1st is small than second?
    printf("Sum of all even integers between %d and %d is %d", n1, n2, sum(n1,n2));
    return 0;
}