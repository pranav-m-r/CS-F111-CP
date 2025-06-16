#include <stdio.h>

int main()
{
  // Structures - Each member of a structure is called a field.

    //Structure Creation or Definition
    struct example
    {
      int x;
      char y;
    };   // Note the semi-colon at the end of structure definition

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // Declaring variables of a structure type
    struct example x1, x2;

    // x1, x2 can be imagined as the following field/value pairs:
    // x1 = [x : _, y : _]
    // x2 = [x : _, y : _]

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /*
    //Another way to declare structure variable
    struct example
    {
      int x;
      char y;
    } x1, x2; 
    */

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // dot operator (.) helps access fields of a structure.
    //Structure Instantiation
    x1.x = 10;
    x1.y = 'A';
    // After executing the above lines the structure x1 looks like
    // x1 = [x : 10, y : 'A']

    printf("x1.x = %d, x1.y = %c\n", x1.x, x1.y);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // Structure Declaration and Instantiation - Another method
    struct example x3 = {20, 'C'};

    printf("x3.x = %d, x3.y = %c\n", x3.x, x3.y);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    // Structure assignment - Copies all fields.
    x2=x1;
    // After executing the above line the structure x2 looks like
    // x2 = [x : 10, y : 'A']

    printf("x2.x = %d, x2.y = %c\n", x2.x, x2.y);

    return 0;
}