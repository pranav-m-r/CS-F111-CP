/*
Execution:

Enter a Number: 5
Factorial of 5 is 120
*/

#include<stdio.h>
/*
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans = 1;
    while(num > 0)
    {
        ans = ans * num--;
        //num = num - 1;
    }
    printf("Factorial is %d\n", ans);
    return 0;
}
*/
// /*
//Option 1: How to keep user input intact
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    int ans = 1;
    while(num > 0)
    {
        ans = ans * num--;
        //num = num - 1;
    }
    printf("Factorial of %d is %d\n", temp, ans);
    return 0;
}
// */

// /*
//Option 1: How to keep user input intact
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d ", num);
    int ans = 1;
    while(num > 0)
    {
        ans = ans * num--;
        //num = num - 1;
    }
    printf("is %d\n", ans);
    return 0;
}
// */
// /*
//Option 2: How to keep user input intact
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
// */

// /*
//Option 3: How to keep user input intact
int fact(int n)
{
    int ans = 1;
    while(n > 0)
    {
        ans = ans * n--;
    }
    return ans;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int f = fact(num);
    printf("Factorial of %d is %d\n", num, f);
    return 0;
}
// */