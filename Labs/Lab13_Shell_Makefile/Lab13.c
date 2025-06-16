#include <stdio.h> //Include the necessary header files


/*
Take the file name as input from the user
Open the file in read mode
Return the file pointer
*/
FILE* OpenFile()
{
    
}


//Take the string to be counted as input from the user
void Input(char target[])
{
    
}


/*
Calculate the number of occurences of the string target in the text file
Return the count
*/
int Count(char target[], FILE* ptr)
{
    
}

int main() //Do not change main
{
    FILE* ptr = OpenFile();
    if(ptr == NULL)
    {
        printf("The file does not exist!");
        return 0;
    }

    char target[100];
    Input(target);
    
    int count = Count(target, ptr);
    printf("Frequency of the word in the file = %d\n", count);

    fclose(ptr);

    return 0;
}