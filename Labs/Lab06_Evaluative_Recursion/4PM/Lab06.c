//Enter required header files

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
int decimalToBinary()
{
    //TODO
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
    printf("Balance: %d\n", balance);//This statement needs to be there in the function. You can however change the position of this statement.
    
    //TODO
}

/**
 * @brief Checks whether a character is a vowel or a consonant
 * Returns 1 if character is a vowel
 * Returns 2 if character is a consonant
 * Returns 3 if character is not an alphabet
 * 
 * ASCII values:
 *  A - Z = 65 - 90
 *  a - z = 97 - 122
 *  0 - 9 = 48 - 57
 * 
 * Examples:
 * check_vowel('a') returns 1
 * check_vowel('b') returns 2
 * check_vowel('0') returns 3
*/
//Have required parameter(s) and return type
check_vowel()
{
    //TODO
}

int main()
{
  ///*******DO NOT CHANGE main()********

  printf("1. decimal to binary  2. calculator(0) 3. check vowel\n");
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
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int ret = check_vowel(ch);
    if(ret == 1)
      printf("You entered a vowel.\n");
    else if(ret == 2)
      printf("You entered a consonant.\n");
    else
      printf("You did not enter an alphabet.\n");
  }

  return 0;
}