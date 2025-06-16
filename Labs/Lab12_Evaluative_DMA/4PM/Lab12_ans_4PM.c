//Have the correct header files. Enter as many you want.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Definition of Struct Employee and Organization.
 * Do NOT change.
*/
typedef struct Employee
{
    char fname[50];
    int prod;
}emp;

typedef struct Organization
{
    emp **e;
    int num;
}org;



/**
 * @brief Dynamically allocates the required memory for the organzation.
 * 
 * Takes in the number of employees as the parameter. 'num' is a positive integer. 
 * Returns the pointer to the organization.
 * 
 * Set the 'num' of the organization as the value of the function parameter.
 * Allocate 'e' as the starting address of an array that holds the pointers to each individual employee.
 * 
 * Refer to the image in the Lab 12 folder. 
 * Remember the addresses in the image are for understanding purpose only.
 * The actual addresses will vary.
 * 
 * Refering to the image, 
 * - The number of employees 'num' is 3.
 * - This function would allocate memory for the organization in the heap starting at 0x50 
 * - 'e' points to the array of 3 pointers, which is 0x1000. 
 * - Each index in this array will point to the each of the 3 employees. 
*/
org* allocate_memory(int num)
{
    org* o;
    
    //TODO
    o = malloc(sizeof(org));
    o->num = num;
    o->e = malloc(num * sizeof(emp *));
    
    return o;
}

/**
 * @brief Takes inputs from the user.
 * 
 * Requires: Employee names contains only upper case and lower case characters. No spaces or digits or special characters.
 * Assume that the length of all entered names are <= 49 (that is, no invalid input will be provided)
 * 
 * This function first allocates the memory on the heap for an employee.
 * Then takes the employee's name and productivity as input.
 * 
 * Refereing to the image in the Lab12 folder, 
 * - Space will be allocated on the heap for the first employee.
 * - Assume that the starting addrees of the allocated space is 0x2000.
 * - Save that address as the value of the first index of the array of pointers to the employees created in the allocate_memory()
 * - Similarly, the second index will store 0x3000 for the second employee and the third index stores 0x4000 which points to the third employee.
 * - The first employee's name is "Arnab" and the productivity is 50. Similarly the others.
*/
void get_input(org *o)
{
    for(int i = 0; i < o->num; i++)
    {
        //TODO: allocate memory for an employee and store the starting address in the respective index of the array created in the allocate_memory() 
        o->e[i] = malloc(sizeof(emp));

        printf("Enter name and productivity:\n");
        
        //TODO: Complete the 2 scanf statements to take the name and productivity as input.
        scanf("%s", o->e[i]->fname);
        scanf("%d", &o->e[i]->prod);
    }
}

/**
 * @brief Returns the index of the employee with the highest productivity. 
 * If more than one employee has the same highest productivity, then return the larger index.
 * 
 * Assume that the employee index start from 0 in the array of pointers each poinitng to an employee.
 * 
 * Examples: 
 *      e[0]->prod = 50
 *      e[1]->prod = 100
 *      e[2]->prod = 80
 *          Return index = 1
 * 
 *      e[0]->prod = 50
 *      e[1]->prod = 100
 *      e[2]->prod = 100
 *          Return index = 2
 */
int highest_prod(org *o)
{
  int maxIndex = -1;
  int maxProd = 0;
  for(int i = 0; i < o->num; i++)
  {
    if(o->e[i]->prod >=  maxProd)
    {
      maxProd = o->e[i]->prod;
      maxIndex = i;
    }
  }
  return maxIndex;
}

/**
 * @brief Returns the index of the employee with the longest name after 
 * rearranging the corresponding index's fname's alphabets in alphabetical order.
 *  
 * If there are multiple employee's names with the same longest length, 
 * then arrange the name present at the lower index. Return the index.
 * 
 * While arranging the characters of a name in alphabetical order (a-z),
 * for the same character, upper case should come alphabetically earlier than the lower case.
 * 
 * The index of the array containing the pointers to the employees start from zero 
 *      
 * Examples: 
 *      e[0]->fname = "abBA"
 *      e[1]->fname = "abc"
 *      e[2]->fname = "aBBa"
 *          index = 0
 *          e[0]->fname = "AaBb"
 * 
 *      e[0]->fname = "abB"
 *      e[1]->fname = "abc"
 *      e[2]->fname = "aBBa"
 *          index = 2
 *          e[2]->fname = "aaBB"
*/
int longest_name_alphabetically(org *o)
{
    int maxLength = 0;
    int maxIndex = -1;
    for(int i = 0; i < o->num; i++)
    {
        if(strlen(o->e[i]->fname) > maxLength)
        {
            maxLength = strlen(o->e[i]->fname);
            maxIndex = i;
        }
    }
    char str[maxLength+1];
    int x = 0;

    for(int i = 65; i <= 90; i++)
    {
        for(int j = 0; j < strlen(o->e[maxIndex]->fname); j++)
        {
            if(o->e[maxIndex]->fname[j] == i)
            str[x++] = o->e[maxIndex]->fname[j];
        }
        for(int j = 0; j < strlen(o->e[maxIndex]->fname); j++)
        {
            if(o->e[maxIndex]->fname[j] == (i+32))
            str[x++] = o->e[maxIndex]->fname[j];
        }
    }
    str[x] = '\0';
    strcpy(o->e[maxIndex]->fname, str);

    return maxIndex;
}

/**
 * @brief Returns the index of the employee that has the smallest name 
 * after rearranging only the consonants of the name in an alphabetical descending order.
 * Treat lower case characters as bigger than upper case characters.
 * that is, first arrange a - z and then arrange A - Z
 * 
 * The vowels in the name should be in their original places.
 * 
 * For example,
 *      "Arnab" ----> "Arnab"
 *      "Surjya" ---> "yurjSa"
 *      "Swaroop"---> "wrapooS"
 * 
 * If there are multiple employee's names with the same smallest length, 
 * then arrange the alphabets of the name as described above present at the higher index.
 * Return the index.
 * 
 * The index of the array containing the pointers to the employees start from zero 
 *      
 * Examples: 
 *      e[0]->fname = "abBA"
 *      e[1]->fname = "Eac"
 *      e[2]->fname = "aBBa"
 *          index = 1
 *          e[1]->fname = "Eac"
 * 
 *      e[0]->fname = "EEe"
 *      e[1]->fname = "abc"
 *      e[2]->fname = "aBBa"
 *          index = 1
 *          e[1]->fname = "acb"
*/
int smallest_name_consonant_order(org *o)
{
    int minLength = 50;
    int minIndex = -1;
    for(int i = 0; i < o->num; i++)
    {
        if(strlen(o->e[i]->fname) <= minLength)
        {
            minLength = strlen(o->e[i]->fname);
            minIndex = i;
        }
    }
    char str[minLength+1];
    int x = 0;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char consonant_str[50];

    for(int i = 0; i < 50; i++)
        consonant_str[i] = '\0';
    int i;

    for(i = 0; i < strlen(o->e[minIndex]->fname); i++)
    {
        int flag = 0;
        for(int j = 0; j< 5; j++)
        {
            if(o->e[minIndex]->fname[i] == vowels[j]||o->e[minIndex]->fname[i] == (vowels[j]-32))
            {
                str[i] = o->e[minIndex]->fname[i];
                flag = 1;
            }
        }
        if(flag == 0)
        {
            consonant_str[x++] = o->e[minIndex]->fname[i];
            str[i] = '1';
        }
    }

    str[i] = '\0';

    char consonant_str_descending[50];
    int count = 0;

    for(int i = 122; i >= 97; i--)
    {
        for(int j = 0; j < x; j++)
        {
            if(consonant_str[j] == i)
                consonant_str_descending[count++] = consonant_str[j];
        }
    }
    
    for(int i = 90; i >= 65; i--)
    {
        for(int j = 0; j < x; j++)
        {
            if(consonant_str[j] == i)
                consonant_str_descending[count++] = consonant_str[j];
        }
    }

    int place = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == '1')
            str[i] = consonant_str_descending[place++];
    }

    strcpy(o->e[minIndex]->fname, str);

    return minIndex;
}


/**
 * The driver function of the code. Do not modify it.
*/
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    org* o = allocate_memory(n);

    get_input(o);

    printf("This program supports THREE operations:\n");
    printf("\t1. Print the employee's name with the highest productivity,\n");
    printf("\t2. Print all characters of the longest name in alphabetical order.\n");
    printf("\t3. Print all characters of the smallest name in consonant alphabetical order.\n\n");
    printf("Choose an operation (1 or 2 or 3): ");
    int operation = 0;
    scanf("%d", &operation);

    if(operation == 1)
    {
        int index = highest_prod(o);
        printf("The employee with the highest productivity is %s\n", o->e[index]->fname);
    }

    else if(operation == 2)
    {
        int index = longest_name_alphabetically(o);
        printf("The characters in the longest employee's name in alphabetical order are %s\n", o->e[index]->fname);
    }

    else if(operation == 3)
    {
        int index = smallest_name_consonant_order(o);
        printf("The characters in the smallest employee's name in consonant alphabetical order are %s\n", o->e[index]->fname);
    }

  return 0;
}