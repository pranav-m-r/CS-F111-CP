#include <stdio.h>

// Create a function that takes the percentage as the input and prints
//"FAIL" if percentage is less that 40 and "PASS" otherwise.

void PassFail(int percentage)
{
    //TODO
}

// Create a function that takes the percentage as the input and prints the grade
//  "A" - (100 - 81)
//  "B" - (80 - 61)
//  "C" - (60 - 41)
//  "D" - (40 - 31)
//  "E" - (30 - 21)
//  "F" - otherwise
//IMPORTANT: Remember to put a newline character at the end of the printf statement.
void Grade(int percentage)
{
    //TODO
}

int main()
{
    //DO NOT CHANGE main()
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