//Enter required header files
#include<stdio.h>
/**
 * @brief Returns the binary form of the decimal representation of an integer
 * 
 * - One of the methods to convert decimal to binary is by dividing the given decimal number 
 *   recursively by 2.
 * - The remainders are noted down till we get 0 as the final quotient. 
 * - After this step, these remainders are written in reverse order to get the binary value 
 *   of the given decimal number.
 * 
 * Example:
 * decimalToBinary(0) returns 0
 * decimalToBinary(1) returns 1
 * decimalToBinary(7) returns 111
 * decimalToBinary(200) returns 11001000  
 */
//Have required parameter(s)
int decimalToBinary(int decimal)
{
    //TODO
    int binary;
    if (decimal == 0)
      binary = 0;
    else
      binary = (decimal % 2) + (10 * (decimalToBinary(decimal / 2)));
    return binary;
}


/**
 * @brief 
 * - Performs simple arithmetic operations on the parameter 'balance' depending on the options 
 *   entered by the user.
 * - The function begins by printing the 'balance' and then asks for an option from the user.
 * - The option entered by the user could be one of the following characters:
 *          '+', '-', 'e', 'c'
 * - On receiving an option 'e', the function does not ask as for any more 
 *   options to be entered and returns 'e', thereby exiting from the function.
 * - On receiving one of '+', '-' as an option, the function waits for the user 
 *   to enter an integer 'input' and performs the corresponding operation between 'balance' and 'input'.
 * - On receiving the option 'c', cancel the last operation and continue from there; 
 *   If there are no more operations to cancel, exit the program.
 * - If the user enters some other option other than the 4 allowed, the program exits.
 *  
 * Example: 
 *   - A possible run due to the function-call 'calculator(0)' is given below:
            Balance: 0
            +
            10
            Balance: 10
            +
            10
            Balance: 20
            +  
            10
            Balance: 30
            e
 *   - Another possible run due to the function-call 'calculator(0)' is given below:
            Balance: 0
            +
            10
            Balance: 10
            +
            10
            Balance: 20
            -
            5
            Balance: 15
            c
            Balance: 20
            +  
            10
            Balance: 30
            c
            Balance: 20
            c
            Balance: 10
            e
*    - Another possible run due to the function-call 'calculator(0)' is given below:
            Balance: 0
            +
            10
            Balance: 10
            -
            10
            Balance: 0
            c
            Balance: 10
            c
            Balance: 0
            c
*    - Another possible run due to the function-call 'calculator(0)' is given below:
            Balance: 0
            -
            10
            Balance: -10
            *
 */
char calculator(int balance)
{  
    //printf("Balance: %d\n", balance);//This statement needs to be there in the function. You can however change the postition of this statement.
    
    //TODO
    int input;
    char user_option, return_option;
  
    printf("Balance: %d\n", balance);
    scanf(" %c", &user_option);
  
    if (user_option == '+')
    {
      scanf("%d", &input);
      return_option = calculator(balance+input);
    }
    else if (user_option == '-')
    {
      scanf("%d", &input);
      return_option = calculator(balance-input);
    }
    else if (user_option == 'e' || user_option == 'c')
    {
      return user_option;
    }
  
    if (return_option == 'e')
      return 'e';

    if (return_option == 'c')
      return calculator(balance);
}

/**
 * @brief Checks whether a year is a leap year or not
 * Returns 1 if year is a leap year
 * Returns 2 if year is a non-leap year
 * Returns 3 if character is not a valid year. A year is valid if the input is between 100 and 2500 (both 100 and 2500 inclusive)
 * 
 * According to Wikipedia, 
 * A year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100.
 * However these centurial years are leap years if they are exactly divisible by 400. 
 * For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are.
 * 
 * Examples:
 * check_leap_year(2000) returns 1
 * check_leap_year(1700) returns 2
 * check_leap_year(0) returns 3
*/
int check_leap_year(int year)
{
    if(year >= 100 && year <=2500)
    {
      if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
      else
        return 2;
    }
    else
      return 3;
}

int main()
{
  ///*******DO NOT CHANGE main()********

  printf("1. decimal to binary  2. calculator(0) 3. check leap year\n");
  printf("Which function do you want to test? Enter 1 or 2 or 3 accordingly.\n");

  int option;
  scanf(" %d", &option);

  if(option == 1)
  {
    int decimal;
    printf("Enter a number between 0 and 1000 (both inclusive): ");
    scanf("%d", &decimal);
    printf("Binary is: %d\n", decimalToBinary(decimal));
  }
  else if(option == 2)
  {
    calculator(0);
  }
  else if(option ==3)
  {
    int year;
    printf("Enter a year between 100 and 2500 (both inclusive): ");
    scanf("%d", &year);
    int ret_leap = check_leap_year(year);
    if(ret_leap == 1)
      printf("You entered a leap year.\n");
    else if(ret_leap == 2)
      printf("You entered a non-leap year.\n");
    else
      printf("You did not enter a valid year.\n");
  }

  return 0;
}