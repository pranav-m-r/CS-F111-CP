//Print maximum of 2 numbers

#include<stdio.h>

int maximum(int num1, int num2)
{
    /*
    int max;
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    return max;
    */
    //Can we do the same wih just an if statement, not needing an else?
    int max = num1;
    
    if(num2 > max)
        max = num2; 
        
    return max;
}

int main()
{
    int x = 5, y = 12;
    printf("The greater value is %d\n", maximum(x,y));
    return 0;
}
