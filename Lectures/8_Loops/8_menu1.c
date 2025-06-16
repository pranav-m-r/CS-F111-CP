/*
Menu: 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division 5. Exit
Options 1-4: enter 2 numbers and print the output
The menu keeps repeating until Option 5 is typed

Additional 1: If user enters anything other than 1-5, 
ask the user to enter option until the user enter the correct option.

Additional 2: For Option 4, if the second number is zero, 
ask the user to enter a non-zero number
*/

#include<stdio.h>

int main()
{
    int option;
    printf("Enter one of the options 1-5 (1. Addition, 2. Subtraction, 3. Multiplication, 4. Division 5. Exit): ");
    scanf("%d", &option);
    while(option < 1 || option > 5)
    {
        printf("Invalid Input!\nEnter one of the options 1-5 (1. Addition, 2. Subtraction, 3. Multiplication, 4. Division 5. Exit): ");
        scanf("%d", &option);
    } 
    while(option != 5)
    {
        int num1, num2;
        printf("Enter 2 numbers:\n");
        scanf("%d%d", &num1, &num2);
        if(option == 1)
            printf("%d + %d = %d\n", num1, num2, num1+num2);
        else if(option == 2)
            printf("%d - %d = %d\n", num1, num2, num1-num2);  
        else if(option == 3)
            printf("%d * %d = %d\n", num1, num2, num1*num2);
        else if(option == 4)
            printf("%d / %d = %d\n", num1, num2, num1/num2); 
        printf("Enter one of the options 1-5 (1. Addition, 2. Subtraction, 3. Multiplication, 4. Division 5. Exit): ");
        scanf("%d", &option);

        while(option < 1 || option > 5)
        {
            printf("Invalid Input!\nEnter one of the options 1-5 (1. Addition, 2. Subtraction, 3. Multiplication, 4. Division 5. Exit): ");
            scanf("%d", &option);
        }             
    }
    return 0;
}