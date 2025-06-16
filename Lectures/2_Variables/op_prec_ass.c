/*
Understanding Operator Precedence and Associativity

Precedence = priority
Associativity = Operators with same priority, L->R or R->L

https://en.cppreference.com/w/c/language/operator_precedence
*/

#include<stdio.h>
int main()
{
    
    int a = 2, b = 3;

    a = b - a * 4;
    printf("a = %d, b = %d\n", a, b);

    /*
    The result of the remainder operator x % y should be such that
            ((x/y) * y) + x%y equals x
    
    */
    ///*
    a = b * 2 / 2 % a; 
    printf("a = %d, b = %d\n", a, b);
    //*/

    ///*
    a = b = 8;
    printf("a = %d, b = %d\n", a, b);
    //*/

    return 0;
}