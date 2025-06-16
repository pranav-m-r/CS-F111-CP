#include <stdio.h>

// Create a function that takes the percentage as the input and prints
//"FAIL" if percentage is less that 40 and "PASS" otherwise.

void PassFail(int percentage)
{
    if (percentage < 40)
    {
        printf("FAIL\n");
    }
    else
    {
        printf("PASS\n");
    }
}

// Create a function that takes the percentage as the input and prints the grade
//  "A" - (100 - 81)
//  "B" - (80 - 61)
//  "C" - (60 - 41)
//  "D" - (40 - 31)
//  "E" - (30 - 21)
//  "F" - otherwise
void Grade(int percentage)
{
    if (percentage >= 81 && percentage <= 100)
    {
        printf("A\n");
    }
    else if (percentage >= 61)
    { // no need to put the upperbound as it is taken care by the if statement
        printf("B\n");
    }
    else if (percentage >= 41)
    {
        printf("C\n");
    }
    else if (percentage >= 31)
    {
        printf("D\n");
    }
    else if (percentage >= 21)
    {
        printf("E\n");
    }
    else
    {
        printf("F\n");
    }
}

int main()
{

    int option;
    printf("Enter number '1' for pass/fail and '2' for grade\n");
    scanf("%d", &option);

    // check if option is valid
    // take the percentage as input
    // Verify if the percentage is between 0 to 100
    // else print "INVALID INPUT"
    // Based on option carry out the required operation

    if (option != 1 && option != 2)
    {
        printf("INVALID INPUT\n");
    }

    else
    {
        int percentage;
        printf("Enter percentage: \n");
        scanf("%d", &percentage);

        if (percentage > 100 || percentage < 0) // nested if else
        {
            printf("INVALID INPUT\n");
        }
        else if (option == 1)
        {
            PassFail(percentage);
        }
        else
        {
            Grade(percentage);
        }
    }
}